///Write a program which accept string from user and count number of white spaces
/*
Input : “MarvellouS”
Output : 0
Input : “MarvellouS Infosystems”
Output : 1
Input : “MarvellouS Infosystems by Piyush Manohar Khairnnar”
Output : 5
*/

#include<stdio.h>
#include<string.h>

int CountWhite(char *str)
{
    int cnt=0;
    while(*str !=0 )
    {
        if(*str == ' ')
        {
            cnt++;
        }
        *str++;
    }

    return cnt;
}

int main()
{
    char arr[20];
    int iRet = 0;

    printf("\nEnter String =>");
    scanf("%[^’\n’]s",arr);

    iRet = CountWhite(arr);

    printf("%d",iRet);

    return 0;
}
