///Write a program which displays ASCII table. Table contains symbol, Decimal, Hexadecimal and Octal representation of every member from0 to 255.

#include<stdio.h>


void DisplayASCII()
{
    int i =0;

    for(i=0; i<=255; i++)
    {
        printf("\nSymbol : %c ",i);
        printf("\nDecimal : %d ",i);
        printf("\nHexadecimal : %x ",i);
        printf("\nOctal : %o ",i);
    }
}

int main()
{
    DisplayASCII();

    return 0;
}
