/*Write a program which accept number from user and count the frequency of 2.
Input: 2395
Output: 1
*/
#include<stdio.h>

int CountTwo(int iNo)
{
    int iFreq = 0;
    int iDigit = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit == 2)
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

    iRet = CountTwo(iValue);

    printf("%d",iRet);
}