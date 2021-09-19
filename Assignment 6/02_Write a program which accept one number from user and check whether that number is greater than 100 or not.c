#include<stdio.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL ChkGreater(int No)
{
    if(No>100)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int iValue = 0;

    BOOL bRet = FALSE;

    printf("\nPlease Enter Number =>");
    scanf("%d",&iValue);

    bRet = ChkGreater(iValue);

    if(bRet  == 1)
    {
        printf("\n Greater \n");
    }
    else
    {
        printf("\n Smaller \n");
    }

    getch();
    return 0;
}
