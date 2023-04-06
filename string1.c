#include <stdio.h>
#include <string.h>
void main()
{
	char fname[20]="pramod";
	char mname[]="kumar";
	char *lname="gupta";
	printf("\n%s\t%s\t%s",fname,mname,lname);
//	printf("%c",fname);
//	printf("%c",mname);
//	printf("%c",lname);
    if(fname=="pramod")
       printf("win");
    else
       printf("success");
}
