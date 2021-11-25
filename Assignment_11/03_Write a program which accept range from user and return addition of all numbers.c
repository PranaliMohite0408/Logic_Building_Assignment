///Write a program which accept range from user and return addition of all numbers in between that range.(Range should contains positive numbers only)

/*  Input : 23 30
    Output : 212
    Input : -10 2
    Output : Invalid range
    Input : 90 18
    Output : Invalid range

*/

#include<stdio.h>

int RangeSum(int iStart , int iEnd)
{
    int i = 0 , Sum=0;

    if(iStart >= iEnd || iStart <=0)
    {
        printf("\nInvalid Range !!!!");
        return 0;
    }

    for(i=iStart;i<=iEnd;i++)
    {
        Sum = Sum + i;
    }

    return Sum;
}

int main()
{
    int iValue1 = 0, iValue2 = 0, iRet =0;

    printf("\nEnter Starting Point =>");
    scanf("%d",&iValue1);

    printf("\nEnter Ending Point =>");
    scanf("%d",&iValue2);

    iRet = RangeSum(iValue1, iValue2);

    printf("\nAddition is %d",iRet);

    return 0;
}
