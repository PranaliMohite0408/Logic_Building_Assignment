///Accept one number And check whether is is divisible by 5 or not.

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

int Check(int iNo)
{
    if((iNo % 5) == 0)
    {
        return TRUE;
    }
    else
    {
        return FALSE ;
    }
}

int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter a Integer Number =>");
    scanf("%d",&iValue);

    bRet = Check(iValue);

    if(bRet == TRUE)
    {
        printf("\nInteger Number is Divisible by 5");
    }
    else
    {
        printf("\nInteger Number is Not Divisible by 5\n");
    }

    return 0;
}
