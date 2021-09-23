#include<stdio.h>

float IncomeTax(int iAmount)
{
    float Tax = 0.0;

    if(iAmount > 500000 && iAmount <=  1000000)
    {
        Tax = (iAmount - 500000) * 0.1;
    }
    else if(iAmount > 1000000 && iAmount <= 2000000)
    {
        Tax = 50000 + (iAmount - 1000000 )* 0.2;
    }
    else
    {
        Tax = 50000 + 2000000 + (iAmount - 2000000) * 0.3;
    }
     return Tax;
}

int main()
{
    int Income = 0;
    float Tax_On_Income = 0.0;

    printf("\nEnter Your Income Amount  =>");
    scanf("%d",&Income);

    if(Income <= 0 )
    {
        printf("\nInvalid Income Amount !!!!");
        return -1;
    }

    Tax_On_Income = IncomeTax(Income);

    printf("\nIncome Tax = %f", Tax_On_Income);

    getch();
    return 0;
}
