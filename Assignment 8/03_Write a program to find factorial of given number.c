///Write a program to find factorial of given number.

///Input : 5
///Output : 120 (5 * 4 * 3 * 2 * 1)

#include<stdio.h>

int Factorial(int iNo)
{
      int i = 0;
      if(iNo == 0)
      {
          printf("\nGiven Number is Invalid !!");
      }

      for(i = 1;iNo>0;iNo--)
      {
          i = i*iNo;
      }
      return i;
}

int main()
{
    int iValue = 0,iRet = 0;

    printf("Enter Number =>");
    scanf("%d",&iValue);

    iRet = Factorial(iValue);

    printf("\nFactorial of Given Number is %d",iRet);

    return 0;
}
