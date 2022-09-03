///Write a program which accept string from user and accept one character. Check whether that character is present in string or not.
/*
    Input : “Marvellous Multi OS”
    e
    Output : TRUE
    Input : “Marvellous Multi OS”
    W
    Output : FALSE
*/

#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef BOOL;

BOOL ChkChar(char *str, char ch)
{
    int i=0;

    while(*str !=0 )
    {
        if(*str == ch)
        {
            return TRUE;
        }
        *str++;
    }
}

int main()
{
    char arr[20];
    char cValue ='\0';

    BOOL bRet = FALSE;

    printf("\nEnter String =>");
    scanf("%[^'\n']s",arr);

    printf("\nEnter the Character =>");
    scanf(" %c",&cValue);

    bRet = ChkChar(arr, cValue);

    if(bRet == TRUE)
    {
        printf("\nCharacter Found ");
    }
    else
    {
        printf("\nCharacter not found");
    }

    return 0;
}
