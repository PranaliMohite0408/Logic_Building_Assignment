///Write a program which accept range from user and display all numbers in between that range.
///Input : 23 35
///Output : 23 24 25 26 27 28 29 30 31 32 33 34 35
///Input : 90 18
///Output : Invalid range

#include<stdio.h>

void RangeDisplay(int iStart , int iEnd)
{
    int i=0;

    if(iStart >= iEnd)
    {
        printf("\nInvalid Range !!!");
    }

    for(i=iStart;i<=iEnd;i++)
    {
        printf(" %d",i);
    }

    return i;
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter Starting Point => ");
    scanf("%d",&iValue1);

    printf("Enter Ending Point =>");
    scanf("%d",&iValue2);

    RangeDisplay(iValue1, iValue2);

    return 0;
}
