#include<stdio.h>
void Pattern(int iRow,int iCol)
{
    int i = 0;
    int j = 0;
    int Ch1 = 0;
    int Ch2 = 0;


    for(i = 1;  i <= iRow; i ++)
    {
        for(j = 1,Ch1 = 'A', Ch2 = 'a';  j <= iCol; j++,Ch1++,Ch2++)
        {
           if(i % 2 == 1) 
           {
            printf("%c\t",Ch1);
           }   
           else 
           {
            printf("%c\t",Ch2);
           }
           
                
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