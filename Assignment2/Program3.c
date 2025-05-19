/////////////////////////////////////////////////////////////////
//////////
// FileName : Program3.c
// Description : check  condition and Display
// Author : Bhagsyhree Antu
// Date : 09/05/2025
/////////
////////////////////////////////////////////////////////////////
#include<stdio.h>
void Display(int iNo)
{

    if(iNo < 10)
    {
        printf("hello");

    }
    else 
    {
        printf("Demo");

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