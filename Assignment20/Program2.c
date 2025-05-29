#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
int FirstOCC(int Arr[], int iLength,int iNo)
{
    int iCnt = 0;
   
    
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            return iCnt;

        }
       
       
    }
    return -1;


}

int main()
{
    int iSize = 0,iCnt = 0;
    int iRet = 0;
    int *p = NULL;
    
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
     iRet = FirstOCC(p,iSize,iValue);
     
    if(iRet == -1)
    {
        printf("There is no such a number ");
    }
    else 
    {
        printf("First occurance number is %d",iRet);
    }

    free(p);

    return 0;
}
