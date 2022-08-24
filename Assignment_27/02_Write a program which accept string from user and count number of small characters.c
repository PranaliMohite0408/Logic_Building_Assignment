///Write a program which accept string from user and count number of small characters.
/*
    Input : “Marvellous”
    Output : 9
*/

int CountSmall(char *str)
{
    int iCnt = 0;
    int i=0;

    while(str[i] != '\0')
    {
        if(str[i]>='a' && str[i]<='z')
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

    printf("\nEnter String =>");
    scanf("%[^’\n’]s",arr);

    iRet = CountSmall(arr);

    printf("\nCount of Capital Letters in Given String is => %d",iRet);

    return 0;
}
