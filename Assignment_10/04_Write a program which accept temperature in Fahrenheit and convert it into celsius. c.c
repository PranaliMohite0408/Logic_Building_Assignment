///Write a program which accept temperature in Fahrenheit and convert it into celsius. (1 celsius = (Fahrenheit -32) * (5/9))
///Input : 10
///Output : -12.2222 (10 - 32) * (5/9)

#include<stdio.h>

double FhtoCs(float fTemp)
{
   return ((fTemp - 32)*(5%9)) ;

}

int main()
{
    float fValue = 0.0;
    double dRet = 0.0;

    printf("\n Enter temperature in Fahrenheit => ");
    scanf("%f",&fValue);

    dRet = FhtoCs(fValue);

    printf("\nTemeperature in Fahrenheit %f into Celsius is %f ",fValue,dRet);

    return 0;
}
