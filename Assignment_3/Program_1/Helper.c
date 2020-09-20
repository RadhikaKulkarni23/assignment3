
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

/*
void PrintEven(int iNo)
{
    // Iteration
    int iCnt = 0;
    
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if(iCnt%2 == 0)
        {
            printf("%d\n",iCnt);           
        }
    }
}
*/

int PrintEven(int iNo)
{
    iNo = 2 * iNo;
    int iCnt = 0;

    // Filter
    if(iNo == 0)
    {
        return 0;
    }

    //Updator
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt=1; iCnt<=iNo; iCnt++)
    {
        if(iCnt%2 == 0)
        {
            printf("%d\n",iCnt);
        }
    }
    
    
}
