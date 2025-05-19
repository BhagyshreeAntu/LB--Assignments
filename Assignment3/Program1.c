//Write a program which accept one number from user and print that number of even numbers on screen.
//Input : 7
//Output: 2 4 6 8 10 12 14

#include<stdio.h>

#define ERR_INVALID_INPUT -1

int PrintEven(int iNo)
{
    if(iNo<= 0)
    {
        return ERR_INVALID_INPUT;
    }

      int iCnt = 0;
      int iNum = 2;

      for (iCnt = 1; iCnt <= iNo; iCnt++)
      {
        printf("%d",iNum);
        iNum += 2;
      }


}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("ENTER NUMBER");
    scanf("%d",&iValue);

    iRet = PrintEven(iValue);

    if(iRet ==ERR_INVALID_INPUT)
    {
        printf("YOU ENTERED INVALID INPUT");

    }
    return 0;
 }