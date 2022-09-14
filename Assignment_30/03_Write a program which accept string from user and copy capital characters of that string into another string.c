///Write a program which accept string from user and copy capital characters of that string into another string.
/*
Input : “Marvellous Multi OS”
Output : “MMOS”
*/

#include<stdio.h>
#include<conio.h>
#include<string.h>

void StrCpyCap(char *src, char *dest)
{

    while(*src != '\0')
    {
        if((*src >= 'A') && (*src <= 'Z'))
        {
            *dest = *src;
            *dest++;
        }
         *src++;
    }

    *dest = '\0';

    return;
}

int main()
{
    char arr[30] = "Marvellous Multi OS";
    char brr[30]; /// Empty string

    StrCpyCap(arr,brr);

    printf("\nGiven String is => %s", arr);

    printf("\nCapital Letters from Given String is => %s",brr); /// MMOS

    return 0;
}
