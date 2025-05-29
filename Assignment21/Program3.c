#include<stdio.h>
#include<stdlib.h>
int Diffrence(int Arr[], int iLength)
{
    int iCnt = 0;
    int iMin = Arr[0];
    int iMax = Arr[0];
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt]  < iMin)
        {
            iMin = Arr[iCnt];

        }
        else if(Arr[iCnt]  > iMax)
        {
            iMax = Arr[iCnt];

        }
       
       
    }
    return iMax - iMin;


}

int main()
{
    int iSize = 0,iCnt = 0;
    int iRet = 0;
    int *p = NULL;

    printf("Enter number of elements");
    scanf("%d",&iSize);
    

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
     iRet = Diffrence(p,iSize);
     printf("%d",iRet);
    

    free(p);

    return 0;
}
