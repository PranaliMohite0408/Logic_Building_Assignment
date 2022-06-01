///Accept N numbers from user and return the difference between largest and smallest number.

/*
    Input : N : 6
    Elements : 85 66 3 66 93 88
    Output : 90 (93 -3)
*/

#include<stdio.h>
#include<conio.h>
#include<malloc.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

int Difference(int Arr[], int iLength)
{
    int i = 0,Min = 0,Max = 0;

          for(i = 0;i < iLength;i++)
          {
                if(i == 0)
                {
                       Min = Arr[i];
                       Max = Arr[i];
                }
                if(Min > Arr[i])
                {
                       Min = Arr[i];
                }
                else
                {
                       if(Max < Arr[i])
                       {
                               Max = Arr[i];
                       }
                }
          }

          return Max - Min;
}

int main()
{
    int iSize = 0,iRet = 0,iCnt = 0, iValue = 0;
    int *p = NULL;

    printf("\nEnter number of elements =>");
    scanf("%d",&iSize);


    p = (int *)malloc(iSize * sizeof(int));

    if(p == NULL)
    {
        printf("\nUnable to allocate memory");
        return -1;
    }

    printf("\nEnter %d elements",iSize);

    for(iCnt = 0;iCnt<iSize; iCnt++)
    {
        printf("\nEnter element %d =>",iCnt+1);
        scanf("%d",&p[iCnt]);
    }

    iRet = Difference(p, iSize);

    printf("\nDifference is %d ",iRet);

    free(p);

    return 0;
}
