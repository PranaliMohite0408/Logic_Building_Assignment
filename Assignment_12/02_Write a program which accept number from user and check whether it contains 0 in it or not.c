///Write a program which accept number from user and check whether it contains 0 in it or not.

/*
    Input : 1018
    Output : It Contains Zero
*/

#include<stdio.h>

#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL ChkZero(int iNo)
{
    int iDigit = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    while(iNo >0)
    {
        iDigit = iNo % 10;

        if(iDigit == 0)
        {
            break;
        }

        iNo = iNo/10;
    }
    return;

}

int main()
{
    int iValue = 0;

    BOOL bRet = FALSE;

    printf("Enter Number =>");
    scanf("%d",&iValue);

    bRet = ChkZero(iValue);

    if(bRet == TRUE)
    {
        printf("\nIt Contains Zero");
    }
    else
    {
        printf("\nThere is no Zero");
    }

    return 0;
}
