/*Write a program which accept area in square feet and convert it into square meter. 
(1 square feet = 0.0929 Square meter)
Input: 5
Output: 0.464515
*/
#include<stdio.h>

double SquareMeter(int iNo)
{
    double iMeter = iNo * 0.0929;
    
    return iMeter;
}

int main()
{
    int iValue = 0;
    double iRet = 0.0;

    printf("Enter area in square feet : ");
    scanf("%d",&iValue);

    iRet = SquareMeter(iValue);

    printf("The area in square meter is %f",iRet);

    return 0;

}