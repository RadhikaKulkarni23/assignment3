#include "Header.h"

void DisplayConvert(char cVal)
{
   if (islower(cVal))
   {
	   printf("%c", toupper(cVal));
   } 
   else if(isupper(cVal))
   {
      printf("%c", tolower(cVal));
   }
}