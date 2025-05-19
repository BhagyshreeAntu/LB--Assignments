/////////////////////////////////////////////////////////////////
//////////
// FileName : Program2.c
// Description : Display reverse number of * on console
// Author : Bhagsyhree Antu
// Date : 09/05/2025
/////////
////////////////////////////////////////////////////////////////

#include<stdio.h>
void Display(int iNo)
{
    int iCnt = 0;
    iCnt = 1;
    while(iNo >= iCnt)
    {
        printf("*");
        iNo--;


    }

}
int main()
{
    int iValue = 0;
     
    printf("Enter Number");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;

}