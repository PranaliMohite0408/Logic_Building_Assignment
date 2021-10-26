///Accept single digit number from user and print it into word.

#include<stdio.h>

void Display(int iNo)
{
    if(iNo<0)
    {
        printf("\nInvalid Number !!");
    }

    if(iNo ==0)
    {
        printf("\nZero");
    }

    switch(iNo)
    {
        case 1 :
                printf("\nOne");
                break;

        case 2 :
                printf("\nTwo");
                break;

        case 3 :
                printf("\nThree");
                break;

        case 4 :
                printf("\nFour");
                break;

        case 5 :
                printf("\nFive");
                break;

        case 6 :
                printf("\nSix");
                break;

        case 7 :
                printf("\nSeven");
                break;

        case 8 :
                printf("\nEight");
                break;

        case 9 :
                printf("\nNine");
                break;

        default:
                printf("\nInvalid Input!!!");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter Number => ");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}
