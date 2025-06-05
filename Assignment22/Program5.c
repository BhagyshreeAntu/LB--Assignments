#include<stdio.h>
#include<stdlib.h>
 void DisplaySchedule(char Ch)
{

    if(Ch == 'A')
    {
        printf("your exam is at 7AM");
    }
    else if(Ch == 'B')
    {
         printf("your exam is at 8.30AM");
    }
     else if(Ch == 'C')
    {
        printf("your exam is at 9.20AM");
    }
     else if(Ch == 'D')
    {
         printf("your exam is at 10.30AM");
    }
    else 
    {
         printf("you enter wrong Division");
        
    }



}
int main()
{
    char cValue = '\0';

    printf("Enter your Division\n");
    scanf("%d",&cValue);

    DisplaySchedule(cValue);

    return 0;
}