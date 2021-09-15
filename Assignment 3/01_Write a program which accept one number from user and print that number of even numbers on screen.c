///Write a program which accept one number from user and print that number of even numbers on screen.

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void PrintEven(int iNo)
{
    int  Cnt = 0;

    if(iNo <= 0)
    {
        return;
    }

    for(Cnt=1;iNo>=Cnt;Cnt++)
    {
        printf("\n%d",2*Cnt);
    }

}

int main()
{
    int iValue = 0;

    printf("Enter Number => ");
    scanf("%d",&iValue);

    PrintEven(iValue);

    return 0;
}
