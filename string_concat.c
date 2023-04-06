#include <stdio.h>
#include <string.h>
void main()
{
	char fname[20]="pramod";
	char mname[]="kumar";
	char *lname="gupta";
	char result[100];
	strcat(fname,lname); 
	printf("\n%s",fname); // it will add the value to the first string
	printf("\n%s",lname); // it will have no effect on the last name
       
    
}
