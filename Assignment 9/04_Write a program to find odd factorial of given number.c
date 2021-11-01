///Write a program to find odd factorial of given number.
///Input : 5
///Output : 15 (5 * 3 * 1)

#include<stdio.h>

int OddFactorial(int iNo)
{
    int Odd_Fact = 1,Even_Fact = 1, i = 0;

    if(iNo<0)
    {
        iNo= -iNo;
    }

    for(i = 1; iNo >0 ; iNo--)
    {
        i = i*iNo;

        if(iNo%2 != 0)
        {
            Odd_Fact = Odd_Fact * iNo;
        }
    }

    return Odd_Fact;
}

int main()
{
    int iValue = 0,iRet = 0;

    printf("Enter Number => ");
    scanf("%d",&iValue);

    iRet = OddFactorial(iValue);

    printf("Odd Factorial of number is %d",iRet);

    return 0;
}
