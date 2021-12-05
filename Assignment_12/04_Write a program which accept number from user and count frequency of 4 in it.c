///Write a program which accept number from user and count frequency of 4 in it.

/*
    Input : 2445
    Output : 2

*/

#include<stdio.h>

int CountFour(int iNo)
{
    int Dig =0, Cnt =0;

    if(iNo <=0)
    {
        iNo = -iNo;
    }

    while(iNo>0)
    {
        Dig = iNo % 10 ;

        if(Dig == 4)
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

    printf("\nEnter Number = ");
    scanf("%d",&iValue);

    iRet = CountFour(iValue);
    printf("%d",iRet);

    return 0;
}
