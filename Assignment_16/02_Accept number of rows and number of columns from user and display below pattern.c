///Accept number of rows and number of columns from user and display below pattern.

/*
    Input : iRow = 4 iCol = 4
    Output : A B C D
             a b c d
             A B C D
             a b c d
*/

#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0, j =0;
    char ch = '\0', ch1 = '\0';

    for(i =1;i<=iRow;i++)
    {
        ch = 'A';
        ch1 = 'a';

        for(j=1;j<=iCol;j++)
        {
            if(i%2 ==0)
            {
                printf(" %c ",ch1++);
            }
            else
            {
                printf(" %c ",ch++);
            }
        }
        printf("\n");
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("\nEnter number of rows and columns =>");
    scanf("%d%d",&iValue1, &iValue2);

    Pattern(iValue1, iValue2);

    return 0;
}
