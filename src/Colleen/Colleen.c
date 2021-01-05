#include <stdio.h>

/*
	TB - tab
	NL - new line
	DQ - double quotation mark
*/
#define TB 9
#define NL 10
#define DQ 34
#define SOURCE "#include <stdio.h>%c%c/*%c%cTB - tab%c%cNL - new line%c%cDQ - double quotation mark%c*/%c#define TB 9%c#define NL 10%c#define DQ 34%c#define SOURCE %c%s%c%c%cvoid print_the_code()%c{%c%cprintf(SOURCE,NL,NL,NL,TB,NL,TB,NL,TB,NL,NL,NL,NL,NL,DQ,SOURCE,DQ,NL,NL,NL,NL,TB,NL,TB,NL,NL,NL,NL,NL,TB,NL,TB,TB,NL,TB,NL,TB,NL,TB,NL,NL);%c%creturn ;%c}%c%cint main()%c{%c%c/*%c%c%cProgram starts here%c%c*/%c%cprint_the_code();%c%creturn 0;%c}%c"

void print_the_code()
{
	printf(SOURCE,NL,NL,NL,TB,NL,TB,NL,TB,NL,NL,NL,NL,NL,DQ,SOURCE,DQ,NL,NL,NL,NL,TB,NL,TB,NL,NL,NL,NL,NL,TB,NL,TB,TB,NL,TB,NL,TB,NL,TB,NL,NL);
	return ;
}

int main()
{
	/*
		Program starts here
	*/
	print_the_code();
	return 0;
}
