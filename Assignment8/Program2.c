/*Write a program which accept width & height of rectangle from user and calculate its area. 
(Area Width * Height)
Input: 5.3    9.78
Output: 51.834
*/
#include<stdio.h>

double RectArea(float fWidth, float fHeight)
{
    double dArea = 0.0;
    
    dArea = fWidth * fHeight;

    return dArea;
}

int main()
{
    float fWidth = 0.0;
    float fHeight = 0.0;
    double dRet = 0.0;

    printf("Enter width : ");
    scanf("%f",&fWidth);

     printf("Enter Height : ");
    scanf("%f",&fHeight);

    dRet = RectArea(fWidth, fHeight);

    printf("Area of REctangle is %.4f",dRet);

    return 0;

}