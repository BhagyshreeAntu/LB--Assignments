#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;
BOOL CheckAlpha(char Ch)
{
   
        if((Ch >= 'A') && (Ch <= 'z'))
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

    printf("Enter the charecter");
    scanf("%c\n",&cValue);

    bRet = CheckAlpha(cValue);

    if(bRet == TRUE)
    {
        printf("it is character");

    }
    else 
    {
        printf("it is not a charecter");
    }




    return 0;
}