///Write a program which accept number from user and display below pattern.

///Input : 5
///Output : * * * * * # # # # #

#include<stdio.h>

void Display(int iNo)
{
   int i = 0;

   if(iNo <= 0 )
   {
       printf("\n Invalid Number !!!");
   }

   for(i =1; i<=iNo*2 ;i++)
   {
        if(i <= iNo)
        {
            printf(" * ");
            continue;
        }

        printf(" # ");
   }
   return;
}

int main()
{
    int iValue = 0;

    printf("Enter Number => ");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}
