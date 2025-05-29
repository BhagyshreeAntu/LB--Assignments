#include<stdio.h>
void Pattern(int iRow,int iCol)
{
    int i = 0;
    int j = 0;
    char Ch = 0;

    for(i = 1,Ch = 'A';  i <= iRow; i ++,Ch++)
    {
        for(j = 1;  j <= iCol; j++)
        {
           
             printf("%c\t",Ch);    
            
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