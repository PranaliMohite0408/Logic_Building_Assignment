///4. Write a program which accepts Number from user and print all odd numbers up to Number.
///Input : 18
///Output : 1 3 5 7 9 11 13

#include<stdio.h>

void OddDisplay(int iNo)
{
    int i =0;
    for(i=0;i<=iNo;i++)
    {
        if(i%2 != 0)
        {
            printf(" %d",i);
        }
    }
    return;
}

int main()
{
    int iValue = 0;
    printf("Enter number =>");
    scanf("%d",&iValue);
    OddDisplay(iValue);
    return 0;
}
