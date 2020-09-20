/*
 Problem statement : Write a program which display 1 to 5 on screen.
 */

#include "Header.h"

int main()      // Entry point function
{
    int iValue = 0;
	
	printf("Enter number: ");
	scanf("%d",&iValue);
	
	PrintEven(iValue);
	
    return 0;
}
