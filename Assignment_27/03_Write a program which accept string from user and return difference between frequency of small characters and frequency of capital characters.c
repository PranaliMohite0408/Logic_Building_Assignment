///Write a program which accept string from user and return difference between frequency of small characters and frequency of capital characters.
/*
    Input : “MarvellouS”
    Output : 6 (8-2)
*/

#include<stdio.h>

int Difference(char *str)
{
    int iCnt_Cap = 0, iCnt_Sml=0, i=0;

    while(str[i] != '\0')
    {
        if(str[i]>='A' && str[i] <='Z')
        {
            iCnt_Cap++;
        }
        else if(str[i]>='a' && str[i]<='z')
        {
            iCnt_Sml++;
        }
        i++;
    }

    return iCnt_Sml - iCnt_Cap ;
}

int main()
{
    char arr[20];
    int iRet = 0;

    printf("\nEnter String =>");
    scanf("%[^’\n’]s",arr);

    iRet = Difference(arr);

    printf("\ndifference between frequency of small characters and frequency of capital characters is =>%d",iRet);

    return 0;
}
