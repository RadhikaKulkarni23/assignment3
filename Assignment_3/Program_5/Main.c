/*
 Problem statement : Write a program which display 1 to 5 on screen.
 */

#include "Header.h"

int main()      // Entry point function
{
    	char cValue = '\0';
	BOOL bRet = FALSE;
	
	printf("Enter character: ");
	scanf("%c",&cValue);
	
	bRet = ChkVowel(cValue);

	if (bRet == TRUE)
	{
		printf("It is a vowel");
	}
	else
	{
		printf("It is not a vowel");
	}
	
    return 0;
}
