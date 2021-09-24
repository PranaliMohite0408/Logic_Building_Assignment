///Write a program which accept number from user and print even factors of that number.

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

///Input : 36
///Output: 2 6 12 18

void DisplayEvenFactor(int iNo)
{
    int i = 0;

    if(iNo <= 0)
    {
        iNo = -iNo;
    }

    for(i = 1; i<=iNo; i++)
    {
        if(iNo % i == 0 && i % 2 == 0 )
        {
            printf("\t %d",i);
        }
    }
    return;
}
int main()
{
    int iValue = 0;

    printf("\nEnter number => ");
    scanf("%d",&iValue);

    DisplayEvenFactor(iValue);

    return 0;
}
