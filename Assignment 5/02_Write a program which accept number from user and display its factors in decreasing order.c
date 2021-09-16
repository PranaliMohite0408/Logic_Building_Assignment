///Write a program which accept number from user and display its factors in decreasing order.

#include<stdio.h>
#include<conio.h>

void FactRev(int iNo)
{
    int i =0;

    for(i=iNo-1;i>0;i--)
    {
        if(iNo%i==0)
        {
            printf("\t %d",i);
        }
    }
}

int main()
{
    int iValue = 0;

    printf("Enter Number => ");
    scanf("%d",&iValue);

    FactRev(iValue);

    return 0;
}
