/*Write a program which accept distance in kilometre and convert it into meter. 
(1 kilometre = 1000 Meter)
Input: 5
Output: 5000
*/
#include<stdio.h>

double KMToMeter(int iNo)
{
    int iMeter = iNo * 1000;
    
    return iMeter;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter distance : ");
    scanf("%d",&iValue);

    iRet = KMToMeter(iValue);

    printf("The Distance in meter is %d",iRet);

    return 0;

}