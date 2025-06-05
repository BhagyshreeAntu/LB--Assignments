#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;
BOOL CheckAlpha(char Ch)
{
   
        if((Ch >= 'A') &&(Ch <= 'Z'))
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
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter the charecter\n");
    scanf("%c",&cValue);

    bRet = CheckAlpha(cValue);

    if(bRet == TRUE)
    {
        printf("it is capital");

    }
    else 
    {
        printf("it is not a capital");
    }




    return 0;
}