#include<stdio.h>
int CountCapital(char *str)
{
    int iCount1 = 0;
    int iCount2 = 0;
    while(*str != '\0')
    {
      if((*str >= 'A') && (*str <= 'Z'))
       {
          iCount1++;

       }
       str++;
       if((*str >= 'a') && (*str <= 'z'))
       {
          iCount1++;

       }
       str++;

    }
    return iCount1 - iCount2;

}
int main()
{
    char arr[20];
    int iRet = 0;

    printf("Enter String\n");
    scanf("%[^'\n']s",arr);


    iRet = CountCapital(arr);
    printf("%d",iRet);



    return 0;
}