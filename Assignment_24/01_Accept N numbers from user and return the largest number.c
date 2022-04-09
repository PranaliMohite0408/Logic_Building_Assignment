///Accept N numbers from user and return the largest number.

/*
Input : N : 6
Elements : 85 66 3 66 93 88
Output : 93
*/
#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

int Maximum(int Arr[], int iLength)
{
    int i=0, Max=0;

    for(i=0;i<iLength;i++)
    {
        if(Arr[i]==0)
        {
            Max = Arr[i];
            continue;
        }

        if(Arr[i]>Max)
        {
            Max = Arr[i];
        }
    }

    return Max;
}

int main()
{
    int iSize = 0,iRet = 0,iCnt = 0, iValue = 0;
    int *p = NULL;

    printf("\nEnter number of Elements =>");
    scanf("%d",&iSize);

    p = (int *)malloc(iSize * sizeof(int));

    if(p == NULL)
    {
        printf("\nUnable to allocate memory");
        return -1;
    }

    printf("\nEnter %d elements =>",iSize);

    for(iCnt = 0;iCnt<iSize; iCnt++)
    {
        printf("\nEnter element %d =>",iCnt+1);
        scanf("%d",&p[iCnt]);
    }

    iRet = Maximum(p, iSize);

    printf("\nLargest Number is %d",iRet);

    free(p);

    return 0;

}
