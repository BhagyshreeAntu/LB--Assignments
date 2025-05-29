#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
bool Check(int Arr[], int iLength,int iNo)
{
    int iCnt = 0;
   
    
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            break;

        }
       
       
    }
    if(iCnt == iLength)
    {
        return false;
    }
    else 
    {
        return true;
    }
    

}

int main()
{
    int iSize = 0,iCnt = 0;
    int iRet = 0;
    int *p = NULL;
    bool bRet = false;
    int iValue = 0;

    printf("Enter number of elements");
    scanf("%d",&iSize);
    
    printf("Enter the number ");
    scanf("%d",&iValue);
    

    p = (int *)malloc(iSize * sizeof(int));
    if(p == NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }

    printf("Enter %d elements ",iSize);

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter element : %d \n",iCnt +1);
        scanf("%d",&p[iCnt]);

    }
     bRet = Check(p,iSize,iValue);
     
     if(bRet == true)
     {
        printf("number  is present");
     }
     else 
     {
         printf("number  is not present");
     }



    free(p);

    return 0;
}
