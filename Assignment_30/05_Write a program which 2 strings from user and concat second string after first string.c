///Write a program which 2 strings from user and concat second string after first string. (Implement strcat() function).
/*
Input : “Marvellous Infosystems”
“Logic Building”
Output : “Marvellous Infosystems Logic Building”
*/

#include<stdio.h>
#include<conio.h>

void StrCatX(char *src, char * dest)
{

    while(*src != '\0') /// Traverse first string till end
    {
        *src++;
    }
    *src = ' ';
    *src++;

    while(*dest != '\0') /// Copy contents of destination in source
    {
        *src = *dest;
        *dest++;
        *src++;
    }

    *src = '\0';

    return;
}
int main()
{
    char arr[50] = "Marvellous Infosystems";
    char brr[30] = "Logic Building";

    StrCatX(arr,brr);

    printf("\n %s",arr); // Marvellous Infosystems Logic Building

    return 0;
}
