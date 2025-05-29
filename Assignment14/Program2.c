#include<stdio.h>
void Pattern(int iRow,int iCol)
{
    int i = 0;
    int j = 0;
    int iNum = 0;

    for(i = 1; i <= iRow; i ++)
    {
        if( i % 2 == 0)
        {
            iNum = 1;
        }
        else 
        {
            iNum = 2;
        }
        for(j = 1;  j <= iCol; j++)
        {

              printf("%d\t",iNum);
              iNum = iNum + 2;
            
        }
        printf("\n");
    }


}
int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter number of elements \n");
    scanf(" %d %d",&iValue1,&iValue2);

    Pattern(iValue1,iValue2);

    return 0;

}