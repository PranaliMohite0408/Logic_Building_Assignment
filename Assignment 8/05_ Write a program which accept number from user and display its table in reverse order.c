///Write a program which accept number from user and display its table in reverse order.

///Input : 2
///Output : 20 18 16 14 12 10 8 6 4 2

#include<stdio.h>

void TableRev(int iNo)
{
    if(iNo<0)
    {
        printf("\nInvalid Number!!!");
    }

    int i =0;

    for(i=10;i>0;i--)
    {
        printf(" %d",i*iNo);
    }

    return;
}

int main()
{
    int iValue = 0;

    printf("Enter Number =>");
    scanf("%d",&iValue);

    TableRev(iValue);

    return 0;
}
