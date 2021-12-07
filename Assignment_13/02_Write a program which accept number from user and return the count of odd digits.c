///Write a program which accept number from user and return the count of odd digits.

/*
    Input : 2395
    Output : 3
*/

#include<stdio.h>

int CountOdd(int iNo)
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

        if(Dig%2 == 1)
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

    iRet = CountOdd(iValue);
    printf("%d",iRet);

    return 0;
}
