#include <stdio.h>
#include <string.h>
void main()
{
	char input[20];
	char input2[20];

	printf("Enter the user input = ");
	scanf("%s",&input);
	strcpy(input2,input);
	strrev(input2);
	if(strcmp(input2,input)==0)
	{
		printf("\nPalindrome");
	}
	else{
		printf("\nNot a palindrome");
	}
	
}
