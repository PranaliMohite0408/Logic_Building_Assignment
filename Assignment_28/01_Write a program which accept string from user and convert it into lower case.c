///Write a program which accept string from user and convert it into lower case.
/*
Input : “Marvellous Multi OS”
Output : marvellous multi os
*/

#include<stdio.h>


void strlwrx(char *str)
{
    int i =0;

    while(str[i]!=0)
    {
        if(str[i]>='A' && str[i]<='Z')
        {
            str[i] = str[i]+32;
        }
        i++;
    }
    return;
}

int main()
{
    char arr[20];

    printf("\nEnter String =>");
    scanf("%[^’\n’]s",arr);

    strlwrx(arr);

    printf("\nModified String is %s ",arr);

    getch();

    return 0;
}
