//Write a program which accepts N from user and print all odd numbers up to N.
//Input: 18
//Output : 1 3 5 7 9 11 13
#include<stdio.h>

void DisplayOdd(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {   
        if((iCnt % 2) != 0)
        {
            printf("%d ",iCnt);
        }
    }

}

int main()
{
    int iValue = 0;
    
    printf("Enter number:");
    scanf("%d",&iValue);

    DisplayOdd(iValue);

    return 0;

}