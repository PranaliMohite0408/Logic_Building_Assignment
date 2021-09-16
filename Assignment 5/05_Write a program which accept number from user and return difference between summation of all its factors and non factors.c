#include<stdio.h>
int FactDiff(int iNo)
{
    int i=0 , Sum1=0 , Sum2 =0;

    for(i=1;i<iNo;i++)
    {
        if(iNo%i == 0)
        {
            Sum1 = Sum1+i;
        }

        if(iNo%i!=0)
        {
            Sum2 = Sum2+i;
        }
    }
    return Sum1 - Sum2;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number => ");
    scanf("%d",&iValue);

    iRet = FactDiff(iValue);
    printf("%d",iRet);

    return 0;
}
