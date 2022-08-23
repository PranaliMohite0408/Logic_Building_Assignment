///Write a program which accept string from user and count number of capital characters.

/*
Input : “Marvellous Multi OS”
Output : 4
*/

#include<stdio.h>
#include<conio.h>

int CountCapital(char *str)
{
    int iCnt = 0, i =0;

    while(str[i] != '\0')
    {
        if(str[i]>='A' && str[i]<='Z')
        {
            iCnt++;
        }
        i++;
    }

    return iCnt;
}

int main()
{
    char arr[20];

    int iRet = 0;

    printf("\nEnter String =>" );
    scanf("%[^’\n’]s",arr);

    iRet = CountCapital(arr);

    printf("\nCount of Capital Letter is => %d",iRet);

    return 0;
}
