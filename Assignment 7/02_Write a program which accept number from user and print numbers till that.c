///Write a program which accept number from user and print numbers till that number

#include<stdio.h>

void Display(int iNo)
{
    int i =0;

    if(iNo<0)
    {
        return -1;
    }

    for(i=1;i<=iNo;i++)
    {
        printf("%d",i);
    }

    return;
}
int main()
{
    int iValue = 0;

    printf("Enter Number =>");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}
