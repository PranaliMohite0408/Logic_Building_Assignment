#include<stdio.h>

float Calculate_Bill(int iAmount)
{
    float Discount_Bill = 0.0;

    if(iAmount < 500)
    {
        Discount_Bill = iAmount;
    }
    else if(iAmount > 500 && iAmount <= 1500)
    {
        Discount_Bill = iAmount -(iAmount * 0.1);
    }
    else
    {
        Discount_Bill = iAmount - (iAmount * 0.15);
    }
     return Discount_Bill;
}

int main()
{
    int Bill = 0;
    float Disc_Bill = 0.0;

    printf("\nEnter Your Bill =>");
    scanf("%d",&Bill);

    if(Bill <= 0 )
    {
        printf("\nInvalid Bill Amount !!!!");
        return -1;
    }

    Disc_Bill = Calculate_Bill(Bill);

    printf("\nBill Should be Paid After Applying Discount = %f", Disc_Bill);

    getch();
    return 0;
}
