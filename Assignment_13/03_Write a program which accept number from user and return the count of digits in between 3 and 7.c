///Write a program which accept number from user and return the count of digits in between 3 and 7.

/*
    Input : 2395
    Output : 1
    Input : 1018
    Output : 0
    Input : 4521
*/

#include<stdio.h>

int CountRange(int iNo)
{
    int Dig =0, Cnt =0;

    if(iNo<0)
    {
        printf("\nInvalid Number...");
        return -1;
    }
    while(iNo>0)
    {
        Dig = iNo% 10;

        if(Dig >3 && Dig < 7)
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

    iRet = CountRange(iValue);
    printf("%d",iRet);

    return 0;
}
