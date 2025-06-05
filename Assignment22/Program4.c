#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;
BOOL CheckAlpha(char Ch)
{
   
        if((Ch >= 'a') &&(Ch <= 'z'))
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
        printf("it is small case");

    }
    else 
    {
        printf("it is not a small  case");
    }




    return 0;
}