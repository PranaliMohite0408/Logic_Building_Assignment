///Accept Character from user and check whether it is special symbol or not (!, @, #, $, %, ^, &, *).
/*
    Input : %
    Output : TRUE
    Input : d
    Output : FALSE

*/

#include<stdio.h>
#include<conio.h>

#define TRUE 0
#define FALSE 1

typedef int BOOL;

BOOL ChkSpecial(char ch)
{
    if(ch=='!' || ch=='@' || ch=='#' || ch=='$' || ch=='%' || ch=='^' || ch=='&' || ch=='*')
    {
        return TRUE;
    }
    return FALSE;
}

int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("\nEnter the character =>");
    scanf("%c",&cValue);

    bRet = ChkSpecial(cValue);
    if(bRet == TRUE)
    {
        printf("\nIt is Special Character ");
    }
    else
    {
        printf("\nIt is Not a Special Character ");
    }

    return 0;
}
