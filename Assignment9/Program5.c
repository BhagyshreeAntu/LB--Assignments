/*Write a program which accept number from user and count frequency of such a digits which are less than 6.
Input: 2395
Output: 3
*/
#include<stdio.h>

int Count(int iNo)
{
    int iFreq = 0;
    int iDigit = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit < 6)
        {
            iFreq++; 
        }
        iNo = iNo/10;
    }
    return iFreq;
}

int main()
{
    int iValue =  0;
    int iRet = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    iRet = Count(iValue);

    printf("%d",iRet);
}