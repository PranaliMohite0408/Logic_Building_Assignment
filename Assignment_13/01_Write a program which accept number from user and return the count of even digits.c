///Write a program which accept number from user and return the count of even digits.

/*
    Input : 2395
    Output : 1
*/

#include<stdio.h>

int CountEven(int iNo)
{
    int Dig =0, Cnt =0;

    if(iNo <0)
    {
        printf("\nInvalid Number...");
        return -1;
    }

    while(iNo>0)
    {
        Dig = iNo % 10 ;

        if(Dig%2 == 0)
        {
            Cnt++;
        }

        iNo = iNo/10;
    }

    return Cnt;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number =>");
    scanf("%d",&iValue);

    iRet = CountEven(iValue);
    printf("%d",iRet);

    return 0;
}
