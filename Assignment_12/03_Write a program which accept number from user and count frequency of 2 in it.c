///Write a program which accept number from user and count frequency of 2 in it.

/*  Input : 2395
    Output : 1
*/

#include<stdio.h>

int CountTwo(int iNo)
{
    int Cnt =0, Dig =0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo >0)
    {
        Dig = iNo % 10;

        if(Dig == 2)
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

    iRet = CountTwo(iValue);
    printf("%d",iRet);

    return 0;
}
