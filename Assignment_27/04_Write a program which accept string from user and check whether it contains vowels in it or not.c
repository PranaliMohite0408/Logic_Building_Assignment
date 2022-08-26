///Write a program which accept string from user and check whether it contains vowels in it or not.

/*
Input : “marvellous”
Output : TRUE
Input : “Demo”
Output : TRUE
Input : “xyz”
Output : FALSE
*/

#include<stdio.h>
#include<conio.h>

#define TRUE 0
#define FALSE 1

typedef BOOL;

BOOL ChkVowel(char *str)
{
    int i=0;

    while(str[i] != '\0')
    {
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' || str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U')
        {
            return TRUE;
        }
        i++;
    }

}

int main()
{
    char arr[20];
    BOOL bRet = FALSE;

    printf("\nEnter String =>");
    scanf("%[^’\n’]s",arr);

    bRet = ChkVowel(arr);
    if(bRet == TRUE)
    {
        printf("\nContains Vowel ");
    }
    else
    {
        printf("\nThere is no Vowel");
    }

    return 0;
}
