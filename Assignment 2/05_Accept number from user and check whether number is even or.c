///Accept number from user and check whether number is even or odd.

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL ChkEven(int iNo)
{
    if(iNo % 2 == 0)
    {
        printf("\nGiven Number %d is Even",iNo);
    }
    else
    {
        printf("\nGiven Number %d is Odd Number",iNo);
    }
}

int main()
{
    int iValue = 0;

    BOOL bRet = FALSE;

    printf("Enter Number =>");
    scanf("%d" ,&iValue);

    bRet = ChkEven(iValue);

    return 0;
}
