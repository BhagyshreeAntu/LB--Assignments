#include<stdio.h>
#include<stdlib.h>
void Display(char Ch)
{
    int iCnt = 0;
    for(iCnt = Ch; iCnt <= 'Z'; iCnt++)
    {
        printf("%c\t",iCnt);
    }
    for(iCnt = Ch; iCnt >=  96 ; iCnt--)
    {
        printf("%c\t",iCnt);
    }

}

int main()
{
    char cValue = '\0';
    printf("Enter the character\n");
    scanf("%c",&cValue);

    Display(cValue);

    return 0;
}