#include <stdio.h>
#include <string.h>
void main()
{
	char fname[20]="pramod";
	char mname[]="kumar";
	char *lname="gupta";
	printf("\n%s\t%s\t%s",fname,mname,lname);

    if(strcmp(fname,"pramod")==0)
       printf("\nwin");
    else
       printf("\nsuccess");
}
