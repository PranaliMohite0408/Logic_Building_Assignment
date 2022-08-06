///Accept Character from user and check whether it is capital or not (A-Z)

/*
Input : F
Output : TRUE
Input : d
Iutput : FALSE
*/

#include<stdio.h>
#include<conio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkCapital(char ch)
{
    if(ch >= 'A' && ch <= 'Z')
    {
        return TRUE;
    }
    return FALSE;
}

int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("\n Enter The Character => ");
    scanf("%c",&cValue);

    bRet = ChkCapital(cValue);

    if(bRet == TRUE)
    {
        printf("\n It is Capital Character !!!");
    }
    else
    {
        printf("\n It is Not Capital Character !!!");
    }

    getch();

    return 0;
}
