///Write a program which accept three numbers and print its multiplication.

#include<stdio.h>

int Multiply(int No1,int No2,int No3)
{
    int Mult = 0;

    if(No1 == 0 || No2 == 0 || No3 == 0 )
    {
        printf("\nEnter Valid Integer Number!!!\n");
        return -1;
    }

    if(No1 != 0 || No2 != 0 || No3 != 0)
    {
        Mult = (No1 * No2 * No3);
    }

    return Mult;
}

int main()
{
    int iValue1 = 0,iValue2 = 0, iValue3 = 0, iRet = 0;

    printf("Please enter three Numbers =>");
    scanf("%d%d%d",&iValue1, &iValue2, &iValue3);

    iRet = Multiply(iValue1,iValue2,iValue3);

    printf("Multiplication of Three Numbers is %d",iRet);

    return 0;
}
