///Accept number from user and display below pattern.


/*
    Input : 4
    Output : # 1 * # 2 * # 3 * # 4 *

*/

#include<stdio.h>

void Pattern(int iNo)
{
    int i =0;
    for(i = 1;i<=iNo;i++)
    {
        printf(" # ");
        printf(" %d ",i);
        printf(" * ");
    }


}

int main()
{
    int iValue = 0;

    printf("Enter Number of Elements =>");
    scanf("%d",&iValue);

    Pattern(iValue);

    return 0;
}
