#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;
BOOL CheckAlpha(int iNo)
{
   
        if((iNo >= '0') &&(iNo <= '9'))
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
    int iValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter the digit\n");
    scanf("%c",&iValue);

    bRet = CheckAlpha(iValue);

    if(bRet == TRUE)
    {
        printf("it is  digit");

    }
    else 
    {
        printf("it is not a digit");
    }




    return 0;
}