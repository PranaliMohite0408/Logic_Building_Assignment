///Accept Character from user and check whether it is small case or not (a-z)

/*
Input : g
Output : TRUE
Input : D
Output : FALSE
*/

#include<stdio.h>
#include<conio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkSmall(char ch)
{
    if(ch >= 97 && ch <= 122)   ///OR if(ch >= 'a' && ch <= 'z')
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

    bRet = ChkSmall(cValue);

    if(bRet == TRUE)
    {
        printf("\n It is Small Case Character");
    }
    else
    {
        printf("\n It is Not a Small Case Character");
    }

    getch();
    return 0;
}