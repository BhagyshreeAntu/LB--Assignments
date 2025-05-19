//Accept one character from user and convert case of that character.
//Input : a Output : A
//Input : D Output : d

#include<stdio.h>
#include<ctype.h>

void DisplayConvert(char cValue)
{
    if(islower(cValue))
    {
        cValue = toupper(cValue);
        printf("%c",cValue);


    }

    else if(isupper(cValue))
    {
        cValue = tolower(cValue);
        printf("%c",cValue);

    }

}
int main()
{
    char cValue = '\0';

    printf("ENTER CHARACTER");
    scanf("%c",&cValue);

    DisplayConvert(cValue);



    return 0;
}