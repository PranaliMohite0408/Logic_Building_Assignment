///Write a program which accept string from user reverse that string in place.

/*
Input : “abcd”
Output : “dcba”
Input : “abba”
Output : “abba”
*/

#include<stdio.h>
#include<conio.h>
#include<string.h>

void StrRevX(char *str)
{
   int i=0,j=0;

   char outStr[20] = {'\0'};

    while(str[i] != '\0')
    {
        i++;
    }

    i = i-1;

    while(i>=0)
    {
        outStr[j] = str[i];
        j++;
        i--;
    }

    printf("\nModified String is %s ",outStr);

    return;

}
int main()
{
    char arr[20];

    printf("\nEnter String =>");
    scanf("%[^'\n']s",arr);

    StrRevX(arr);

    return 0;
}
