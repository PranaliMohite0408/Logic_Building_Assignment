///Write a program which accept string from user and copy that characters of that string into another string in reverse order.

/*
Input : “Marvellous Python”
Output : “nohtyP suollevraM”
*/

#include<stdio.h>
#include<conio.h>
#include<string.h>

void StrCpyRev(char src[], char dest[])
{
    int i=0,j=0;


    while(src[i] != '\0')
    {
        i++;
    }

    i = i-1;

    while(i>=0)
    {
        dest[j] = src[i];
        j++;
        i--;
    }

    dest[j] = '\0';

    return;

}

int main()
{
    char arr[30] = "Marvellous Python";
    char brr[30]; /// Empty string

    StrCpyRev(arr,brr);

    printf("\nGiven String is => %s", arr);

    printf("\nReverse String is => %s",brr); /// nohtyP suollevraM

    return 0;
}
