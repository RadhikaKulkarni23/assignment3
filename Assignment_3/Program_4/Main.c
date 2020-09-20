#include "Header.h"

int main()      // Entry point function
{
    char cValue = '\0';
	
	printf("Enter a character: ");
	scanf("%c",&cValue);
	
	DisplayConvert(cValue);
	
    return 0;
}
