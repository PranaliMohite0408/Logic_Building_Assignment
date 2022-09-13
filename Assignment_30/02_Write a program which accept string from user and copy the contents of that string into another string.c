///Write a program which accept string from user and copy the contents of that string into another string. (Implement strncpy() function)

/*
Input : “Marvellous Multi OS”
10
Output : “Marvellous

Note : If third parameter is greater than the size of source string then
copy whole string into destination.
*/

#include<stdio.h>
#include<conio.h>

void StrNCpyX(char *src, char *dest, int iCnt)
{
    while((*src != '\0') && (iCnt != 0) )
    {
        *dest = *src;
        *src++;
        *dest++;
        iCnt--;
    }
    return ;
}

int main()
{
    char arr[30] = "Marvellous Multi OS";
    char brr[30]; /// Empty string

    StrNCpyX(arr,brr,10);

    printf("\nGiven String is => %s", arr);

    printf("\nModified String is => %s",brr); /// Marvellous

    return 0;
}
