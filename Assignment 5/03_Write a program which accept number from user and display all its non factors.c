#include<stdio.h>
#include<conio.h>

void NonFact(int iNo)
{
    int i=0;

    for(i=1;i<iNo;i++)
    {
        if(iNo%i!=0)
        {
            printf("\t %d",i);
        }
    }

    return i;
}

int main()
{
    int iValue = 0;

    printf("Enter Number =>");
    scanf("%d",&iValue);

    NonFact(iValue);
    return 0;
}
