///Accept one character from user and convert case of that character.

#include<stdio.h>
#include<conio.h>

void DisplayConvert(char CValue)
{
    if(CValue >= 'a' && CValue <='z')
    {
        printf("%c" ,CValue-32);
    }
    else if(CValue >= 'A' && CValue <='Z' )
    {
       printf("\n%c",CValue+32);
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter Character=>");
    scanf("%c",&cValue);

    DisplayConvert(cValue);

    return 0;
}
