///Write a program to find even factorial of given number.
///Input : 5
///Output : 8 (4 * 2)

#include<stdio.h>

int EvenFactorial(int iNo)
{
    int Even_Fact = 1, i = 0;

    if(iNo<0)
    {
        iNo= -iNo;
    }

    for(i = 1; iNo >0 ; iNo--)
    {
        i = i*iNo;

        if(iNo%2 == 0)
        {
            Even_Fact = Even_Fact * iNo;
        }
    }

    return Even_Fact;
}

int main()
{
    int iValue = 0,iRet = 0;

    printf("Enter Number => ");
    scanf("%d",&iValue);

    iRet = EvenFactorial(iValue);

    printf("Even Factorial of number is %d" ,iRet);

    return 0;
}
