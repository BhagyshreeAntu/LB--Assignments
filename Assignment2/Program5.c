//Accept number from user and check whether number is even or odd
#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int bool;

bool CheckEven(int iNo)
{
    if(iNo % 2 == 0)
    {
        return TRUE;
    }
    else 
    {
        return FALSE;
    }
}
int main()
{
    int iValue = 0;
    bool bRet = FALSE;

    printf("ENTER NUMBER");
    scanf("%d",&iValue);

    bRet = CheckEven(iValue);

    if(bRet == TRUE)
    {
        printf("NUMBER IS EVEN");
    }
    else
    {
        printf("NUMBER IS ODD");
    }

    return 0;

}