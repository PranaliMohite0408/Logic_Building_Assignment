///Write a program which accept string from user and accept one character. Return index of last occurrence of that character.

/*
    Input : “Marvellous Multi OS”
    M
    Output : 11

    Input : “Marvellous Multi OS”
    W
    Output : -1

    Input : “Marvellous Multi OS”
    e
    Output : 4
*/

#include<stdio.h>
#include<conio.h>

int Length(char *, char);

int LastChar(char *str, char ch)
{
    int len=0;
    char Temp = ch;

    while(*str != '\0')
    {
        if(*str == Temp)
        {
           return len;
        }
        else
        {
            return -1;
        }
        len++;
        *str++;
    }


}
int main()
{
    char arr[20];
    char cValue = '\0';
    int iRet = 0;

    printf("\nEnter string =>");
    scanf("%[^'\n']s",arr);

    printf("\n Enter the character =>");
    scanf(" %c",&cValue);

    iRet = LastChar(arr, cValue);

    printf("\nCharacter location is %d ",iRet);

    return 0;
}
