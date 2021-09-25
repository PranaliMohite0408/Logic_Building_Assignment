///Write a program which accept total marks & obtained marks from user and calculate percentage.

///Input : 1000 745
///Output : 74.5%

#include<stdio.h>

float Percentage(int No1,int No2)
{
    if(No1 < No2 || No1<0)
    {
        printf("\nEnter Valid Number!!!");

        return -1;
    }

    return No2 * 100 / No1;

}
int main()
{
    int iValue1 = 0,iValue2 = 0;
    float fRet = 0.0;

    printf("Please enter total marks =>");
    scanf("%d",&iValue1);

    printf("Please enter obtained marks =>");
    scanf("%d",&iValue2);

    fRet = Percentage(iValue1,iValue2);

    printf("\nPercentage is %f",fRet);

    return 0;
}
