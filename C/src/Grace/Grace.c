#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>

#define SOURCE "#include <unistd.h>%c#include <stdio.h>%c#include <fcntl.h>%c%c#define SOURCE %c%s%c%c#define FNAME %c%s%c%c#define MAIN(x) int main(){int fd;char t=9;char n=10;char q=34;fd = open(FNAME, O_WRONLY | O_CREAT | O_TRUNC, 0666);if (fd > 0){dprintf(fd, SOURCE,n,n,n,n,q,SOURCE,q,n,q,FNAME,q,n,n,n,n,t,n,n,n);close(fd);return 0;}else return 1;}%c%c/*%c%cMain macro was created above, now let's call it to execute%c*/%cMAIN()%c"
#define FNAME "Grace_kid.c"
#define MAIN(x) int main(){int fd;char t=9;char n=10;char q=34;fd = open(FNAME, O_WRONLY | O_CREAT | O_TRUNC, 0666);if (fd > 0){dprintf(fd, SOURCE,n,n,n,n,q,SOURCE,q,n,q,FNAME,q,n,n,n,n,t,n,n,n);close(fd);return 0;}else return 1;}

/*
	Main macro was created above, now let's call it to execute
*/
MAIN()
