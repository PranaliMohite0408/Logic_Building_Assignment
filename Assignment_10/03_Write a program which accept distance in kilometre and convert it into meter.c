///Write a program which accept distance in kilometre and convert it into meter.(1 kilometre = 1000 Meter)
///Input : 5
///Output : 5000

#include<stdio.h>

int KMtoMeter(int iNo)
{
    return iNo*1000;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter Distance =>");
    scanf("%d",&iValue);

    iRet = KMtoMeter(iValue);

    printf("\n %d Kilometer = %d Meter ",iValue,iRet);

    return 0;
}
