
#include "Header.h"

////////////////////////////////////////////////////////////////////
//
//  Function Name : DisplayNumber
//  Input : None
//  Output : None
//  Description : It is used to display 1 to 5
//  Autor : Piyush Manohar Khairnar
//  Date : 22 July 2020
//
////////////////////////////////////////////////////////////////////

BOOL ChkVowel(char ch)
{
    if(ch =='a' || ch =='A' || ch =='e' || ch =='E' || ch =='i' || ch =='I' || ch =='o' || ch =='O' || ch =='u' || ch =='U')
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
    
}