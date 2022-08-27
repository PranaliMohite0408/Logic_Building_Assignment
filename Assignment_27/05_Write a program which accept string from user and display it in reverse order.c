///Write a program which accept string from user and display it in reverse order.

/*
Input : “MarvellouS”
Output : “SuollevraM”
*/
#include<stdio.h>
#include<string.h>
void Reverse(char *str)
{
    char outStr[20];
    int i=0,j=0;

    while(str[i] != '\0')
    {
        i++;
    }

    i--;

    while(i>=0)
    {
        outStr[j] = str[i];

        j++;
        i--;
    }
    printf("\nReverse String is : %s ",outStr);
    return ;
}

int main()
{
    char arr[20];


    printf("\nEnter String =>");
    scanf("%[^’\n’]s",arr);

    Reverse(arr);

    return 0;
}
