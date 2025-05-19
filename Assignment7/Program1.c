/*write the program which accepts number from user and display below pattern
input : 5
output: * * * * * # # # # # 
Time Complexity is O(2n)
*/
#include <stdio.h>

void Display(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    
    int iCnt = 0;
    
    for(iCnt = (iNo * 2); iCnt >= 1; iCnt--)
    {
        if(iCnt > iNo)
        {
            printf("* ");
        }
        else
        {
            printf("# ");
        }
    }

}

int main()
{
    int iValue = 0;

    printf("Enter Number: ");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}