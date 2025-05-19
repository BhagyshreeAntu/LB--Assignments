/////////////////////////////////////////////////////////////////
//////////
// FileName : Program4.c
// Description : Display number on screen times of second number 
// Author : Bhagsyhree Antu
// Date : 09/05/2025
/////////
////////////////////////////////////////////////////////////////
#include<stdio.h>

void Display(int  iNo, int iFrequency)
{
    int iCnt = 0;

    if (iFrequency < 0 )
    {
        printf("INVALID FREQUENCY ENTERED");
    }
    for(iCnt = 1; iCnt <= iFrequency; iCnt++)
    {
        printf("%d",iNo);
    }
 

}

int main()
{
    int iValue = 0;
    int iCount = 0;

    printf(" ENTER NUMBER");
    scanf("%d",&iValue);

    printf("ENTER FREQUENCY");
    scanf("%d",&iCount);

    Display(iValue,iCount);

    return 0;

}