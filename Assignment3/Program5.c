//Accept on character from user and check whether that character is vowel(a,e,i,o,u) or not.
//Input : E Output : TRUE
//Input : d Output : FALSE

#include<stdio.h>
#include<ctype.h>
#include<stdbool.h>

bool CheckEven(char cValue)
{
    if(isupper(cValue))
    {
        cValue = tolower(cValue);

    }
    if((cValue == 'a' || cValue == 'e' || cValue == 'i' || cValue == 'o' || cValue == 'u'))
    {
        return true;

    }
    else 
    {
        return false;
    }
}
int main()
{
    char cValue = '\0';
    bool iRet = true;

    printf("ENTER CHARACTER\n");
    scanf("%c",&cValue);

    if(iRet == true)
    {
        printf("TRUE");
    }
    else 
    {
        printf("FALSE");
    }
    return 0;

}