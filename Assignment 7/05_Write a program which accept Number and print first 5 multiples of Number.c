///5. Write a program which accept Number and print first 5 multiples of Number.
///Input : 4
///Output : 4 8 12 16 20

#include<stdio.h>

void MultipleDisplay(int iNo)
{
   int i =0;

   for(i=1;i<=5;i++)
   {
       printf(" %d",i*iNo);
   }
}

int main()
{
    int iValue = 0;
    printf("Enter number =>");
    scanf("%d",&iValue);

    MultipleDisplay(iValue);

    return 0;
}
