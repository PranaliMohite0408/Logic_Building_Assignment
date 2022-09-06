///Write a program which accept string from user and accept one character. Return index of first occurrence of that character.
/*
    Input : “Marvellous Multi OS”
    M
    Output : 0
    Input : “Marvellous Multi OS”
    W
    Output : -1
    Input : “Marvellous Multi OS”
    e
    Output : 4
*/

int FirstChar(char *str, char ch)
{
    int i =0;

    while(*str!=0)
    {
        if(*str == ch)
        {
            return i;
        }
        *str++;
        i++;
    }
}

int main()
{
    char arr[20];
    char cValue;
    int iRet = 0;

    printf("\nEnter string =>");
    scanf("%[^'\n']s",arr);

    printf("\nEnter the character =>");
    scanf(" %c",&cValue);

    iRet = FirstChar(arr, cValue);

    printf("\nCharacter location is %d",iRet);

    return 0;
}
