#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>

#define SOURCE "#include <unistd.h>%c\
#include <stdio.h>%c\
#include <fcntl.h>%c\
#include <stdlib.h>%c%c\
\
#define SOURCE %c%s%c%c%c\
\
char find_index(){char i = __FILE__[8]; if (i == 'c') i = '5'; else i -= 1; return i; }%c\
int create(char i){char n=10; char q=34; char child_source_file[] = %c./Sully_X.c%c;child_source_file[8] = i;int fd = open(child_source_file, O_WRONLY | O_CREAT | O_TRUNC, 0666);if (fd <= 0)return 1;dprintf(fd, SOURCE,\
n,\
n,\
n,n,\
n,q,SOURCE,q,n,n,\
n,\
q,q,n,\
q,q,n,\
q,q,n,\
n);close(fd);return 0;}%c\
int compile(char i){char compile_cmd[] = %cclang -Wall -Wextra -Werror Sully_X.c -o Sully_X%c;compile_cmd[34] = i;compile_cmd[47] = i;return(system(compile_cmd));}%c\
int execute(char i){char exe_cmd[] = %c./Sully_X%c;exe_cmd[8] = i;return(system(exe_cmd));}%c\
int main(){char i = find_index();if(create(i) != 0)return 1;if(compile(i) != 0)return 1;if (i > '0')execute(i);return 0;}%c\
"

char find_index(){char i = __FILE__[8]; if (i == 'c') i = '5'; else i -= 1; return i; }
int create(char i){char n=10; char q=34; char child_source_file[] = "./Sully_X.c";child_source_file[8] = i;int fd = open(child_source_file, O_WRONLY | O_CREAT | O_TRUNC, 0666);if (fd <= 0)return 1;dprintf(fd, SOURCE,\
n,\
n,\
n,\
n,n,\
q,SOURCE,q,n,n,\
n,\
q,q,n,\
q,q,n,\
q,q,n,\
n);close(fd);return 0;}
int compile(char i){char compile_cmd[] = "clang -Wall -Wextra -Werror Sully_X.c -o Sully_X";compile_cmd[34] = i;compile_cmd[47] = i;return(system(compile_cmd));}
int execute(char i){char exe_cmd[] = "./Sully_X";exe_cmd[8] = i;printf("before system, exe_cmd=%s\n", exe_cmd);int sys = system(exe_cmd);printf("after system\n");return(sys);}
int main(){char i = find_index();printf("iter %c\n",i);if(create(i) != 0)return 1;printf("create passed\n");if(compile(i) != 0)return 1;printf("compile passed\n");if (i > '0')execute(i);printf("exec passed\n");return 0;}
