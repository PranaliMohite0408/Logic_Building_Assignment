#include<stdio.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL ChkEqual( int No1, int No2)
{
   if(No1 == No2)
   {
       return 1;
   }
   else
   {
       return 0;
   }
}

int main()
{
    int iValue1 = 0,iValue2 = 0;
    BOOL bRet = FALSE;

    printf("Please Enter Two Numbers => ");
    scanf("%d%d",&iValue1, &iValue2);

    bRet = ChkEqual(iValue1,iValue2);

    if(bRet == 1)
    {
        printf("\nEqual");
    }
    else
    {
        printf("\nNot Equal \n");
    }

    getch();
    return 0;
}
