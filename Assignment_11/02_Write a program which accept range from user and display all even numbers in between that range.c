///Write a program which accept range from user and display all even numbers in between that range.
///Input : 23 35
///Output : 24 26 28 30 32 34
///Input : 90 18
///Output : Invalid range

#include<stdio.h>

void RangeDisplayEven(int iStart , int iEnd)
{
    int i =0;
    if(iStart > iEnd)
    {
        printf("\nInvalid Range !!!");
    }

    for(i=iStart;i<=iEnd;i++)
    {
        if(i%2==0)
        {
            printf(" %d",i);
        }
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("\nEnter Starting Point =>");
    scanf("%d",&iValue1);

    printf("\nEnter Ending Point =>");
    scanf("%d",&iValue2);

    RangeDisplayEven(iValue1, iValue2);

    return 0;
}
