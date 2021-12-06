///Write a program which accept number from user and count frequency of such a digits which are less than 6.

/*
    Input : 2395
    Output : 3

*/

#include<stdio.h>

int Count(int iNo)
{
    int Dig = 0, Cnt =0;

    if(iNo <= 0)
    {
        iNo = -iNo;
    }

    while(iNo > 0)
    {
        Dig = iNo %10;

        if(Dig < 6)
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

    printf("\nEnter Number =>");
    scanf("%d",&iValue);

    iRet = Count(iValue);
    printf("%d",iRet);

    return 0;
}
