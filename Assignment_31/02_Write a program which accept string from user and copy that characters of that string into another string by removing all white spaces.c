///Write a program which accept string from user and copy that characters of that string into another string by removing all white spaces.
/*
Input : “Marvel lous Pyth on”
Output : “MarvellousPython”
*/

#include<stdio.h>
#include<conio.h>
#include<string.h>

void StrCpyX(char src[], char dest[])
{
    int i=0, j=0;
    while(src[i] != 0)
    {
        if(src[i] >='A' || src[i]<='Z' && src[i]>='a' || src[i] <='z')
        {
            dest[j] = src[i];
        }
        i++;
        j++;
    }

    return ;
}

int main()
{
    char arr[30] = "Marvel lous Pyth on";
    char brr[30]; /// Empty string

    StrCpyX(arr,brr);

    printf(" %s",brr); /// MarvellousPython

    return 0;
}
