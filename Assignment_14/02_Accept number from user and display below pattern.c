///Accept number from user and display below pattern.

/*
    Input : 5
    Output : 5 # 4 # 3 # 2 # 1 #
*/

#include<stdio.h>

void Pattern(int iNo)
{
    int i=iNo;

    while(iNo>0)
    {
        printf(" %d ",iNo);
        printf(" # ");
        i--;
        iNo--;
    }
}

int main()
{
    int iValue = 0;
    printf("Enter number of Elements =>");

    scanf("%d",&iValue);
    Pattern(iValue);

    return 0;
}
