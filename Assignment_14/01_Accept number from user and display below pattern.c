///Accept number from user and display below pattern

/*
    Input : 5
    Output : A B C D E
*/

#include<stdio.h>

void Pattern(int iNo)
{
    int i =0;
    char ch = 'A';
    while(iNo>0)
    {
        printf(" %c",ch);
        iNo--;
        ch++;
    }

}

int main()
{
    int iValue = 0;

    printf("\nEnter Number of Elements =>");
    scanf("%d",&iValue);

    Pattern(iValue);

    return 0;
}
