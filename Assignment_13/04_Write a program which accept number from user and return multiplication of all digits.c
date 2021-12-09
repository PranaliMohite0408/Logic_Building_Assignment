///Write a program which accept number from user and return multiplication of all digits.

/*
    Input : 2395
    Output : 270
    Input : 1018
    Output : 0
*/

#include<stdio.h>

int MultDigits(int iNo)
{
    int Dig  = 0, Mult = 1;

    if(iNo<0)
    {
        printf("\nInvalid Number....");
        return -1;
    }

    while(iNo>0)
    {
        Dig = iNo % 10;

        Mult = Mult * Dig;

        iNo = iNo/10;
    }

    return Mult;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("\nEnter Number =>");
    scanf("%d",&iValue);

    iRet = MultDigits(iValue);
    printf("%d",iRet);

    return 0;
}
