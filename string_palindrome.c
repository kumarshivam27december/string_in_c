#include <stdio.h>
#include <string.h>
void main()
{
	char temp[20];
	char input[20];
	printf("enter the string ");
	scanf("%s",&input);
	char temp[20]=input[20];
//	temp[20] = input[20];
	strrev(temp);
	printf(temp);
//	if(strcmp(input,temp)==0)
//	{
//		printf("palindrome");
//	}
//	else
//	{
//		printf("not palindrome");
//	}
}
