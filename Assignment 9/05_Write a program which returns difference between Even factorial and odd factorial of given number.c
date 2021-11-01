///Write a program which returns difference between Even factorial and odd factorial of given number.
///Input : 5
///Output : -7 (8 - 15)

#include<stdio.h>

int FactorialDiff(int iNo)
{
    int Even_Fact = 1, Odd_Fact = 1, i=0;

    if(iNo<0)
    {
        iNo= -iNo;
    }

    for(i = 1;iNo> 0; iNo--)
    {
        i = i*iNo;

        if(iNo%2 == 0)
        {
            Even_Fact = Even_Fact*iNo;
        }
        else if(iNo%2 != 0)
        {
            Odd_Fact = Odd_Fact*iNo;
        }
    }

    return Even_Fact - Odd_Fact;
}

int main()
{
    int iValue = 0,iRet = 0;

    printf("Enter Number => ");
    scanf("%d",&iValue);

    iRet = FactorialDiff(iValue);

    printf("Factorial Difference is %d" ,iRet);

    return 0;
}
