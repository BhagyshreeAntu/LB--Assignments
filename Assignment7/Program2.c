/*accept the amount in us dollar and return corresponding value in Indian currency
consider 1$ = 70 rupees 
Input: 10
Output: 700
no loop...so time compexity cannot be calculated*/

#include <stdio.h>

int DollarToINR(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    
    int iINR = 0;
    
    iINR = iNo * 70;

    return iINR;

}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number: ");
    scanf("%d",&iValue);

    iRet = DollarToINR(iValue);

    printf("Value of INR is %d",iRet);

    return 0;
}