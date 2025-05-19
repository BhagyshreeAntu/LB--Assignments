/////////////////////////////////////////////////////////////////
//////////
// FileName : WhileLoop
// Description : Display reverse number 
// Author : Bhagsyhree Antu
// Date : 09/05/2025
/////////
////////////////////////////////////////////////////////////////

#include<stdio.h>
 typedef int BOOL;
 #define TRUE 1
 #define  FALSE 0
 BOOL Check(int iNo)
 { 
    if((iNo % 5) == 0)
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
    BOOL bRet =  FALSE;

    printf("Enter Number");
    scanf("%d\n",&iValue);

    bRet = Check(iValue);

    if (bRet == TRUE)
    {
        printf("DIVISIBLE BY 5");
    }
    else 
    {
        printf("NOT DIVISIBLE BY 5");
    }
    
    return 0;

 }    