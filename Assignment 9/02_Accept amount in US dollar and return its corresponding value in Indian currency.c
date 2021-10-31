///Accept amount in US dollar and return its corresponding value in Indian currency.

///Consider 1$ as 70 rupees.
///Input : 10

#include<stdio.h>

int DollarToINR(int iNo)
{
    if(iNo <= 0)
    {
        printf("\n Invalid Amount !!");
    }

    return iNo*70;

}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number of USD => ");
    scanf("%d",&iValue);

    iRet = DollarToINR(iValue);

    printf("Value in INR is %d",iRet);

    return 0;
}
