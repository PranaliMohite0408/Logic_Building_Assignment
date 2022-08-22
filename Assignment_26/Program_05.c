///Accept character from user and display its ASCII value in decimal, octal and hexadecimal format.
/*
    Input : A
    Output : Decimal 65
    Octal 0101
    Hexadecimal 0X41
*/

void Display (char ch)
{
    printf("\nASCII Value of %c Character is \nDecimal is => %d, \nOctal is => 0%o, \nHexadecimal is => 0X%x",ch,ch,ch,ch);
}

int main()
{
    char cValue = '\0';

    printf("\nEnter the Character =>");
    scanf("%c",&cValue);

    Display(cValue);

    return 0;
}
