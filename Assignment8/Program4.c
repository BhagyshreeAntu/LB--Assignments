/*Write a program which accept temperature in Fahrenheit and convert it into celsius. 
(1 celsius = (Fahrenheit -32) * (5/9))
Input: 10
Output: -12.2222    (10 - 32) * (5/9)
*/
#include<stdio.h>

double FhtoCs(float fTemp)
{
    double dCs = 0.0;
    
    dCs = (fTemp - 32) * (5.0/9.0);

    return dCs;
}

int main()
{
    float fValue = 0.0;
    double dRet = 0.0;

    printf("Enter temperature in fahrenheit : ");
    scanf("%f",&fValue);

    dRet = FhtoCs(fValue);

    printf("Temperature in celsius is %f",dRet);

    return 0;

}