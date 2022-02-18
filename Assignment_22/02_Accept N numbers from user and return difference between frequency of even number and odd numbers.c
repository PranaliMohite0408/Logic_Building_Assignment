///Accept N numbers from user and return difference between frequency of even number and odd numbers.

/*
Input : N : 7
Elements : 85 66 3 80 93 88 90
Output : 1 (4 -3)
*/
#include<stdio.h>

int Frequency(int Arr[], int iLength)
{
    int i=0, ECnt=0, OCnt=0;

    for(i=0;i<iLength;i++)
    {
        if(Arr[i]%2 == 0)
        {
            ECnt++;
        }
        else
        {
            OCnt++;
        }
    }
    return ECnt - OCnt;
}
int main()
{
    int iSize = 0,iRet = 0,iCnt = 0;
    int *p = NULL;

    printf("\nEnter number of elements =>");
    scanf("%d",&iSize);

    p = (int *)malloc(iSize * sizeof(int));

    if(p == NULL)
    {
        printf("\nUnable to allocate memory....");
        return -1;
    }

    printf("Enter %d elements ",iSize);

    for(iCnt = 0;iCnt<iSize; iCnt++)
    {
        printf("\nEnter element %d =>",iCnt+1);
        scanf("%d",&p[iCnt]);
    }

    iRet = Frequency(p, iSize);

    printf("\nDifference Between Even and Odd Number is %d",iRet);

    free(p);

    return 0;
}
