///Write a program which accept number from user and print that number of $ & * on screen.

#include<stdio.h>

void Pattern(int iNo)
{
    int i =0;

    if(iNo<0)
    {
        return -1;
    }

    for(i=1;i<=iNo;i++)
    {
        printf(" $ *",iNo);
    }

    return;
}

int main()
{
    int iValue = 0;

    printf("Enter Number => ");
    scanf("%d",&iValue);

    Pattern(iValue);

    return 0;

}
