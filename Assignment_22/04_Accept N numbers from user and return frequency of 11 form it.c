//Accept N numbers from user and return frequency of 11 form it.

/*
Input : N : 6
Elements : 85 66 3 15 93 88
Output : 0
Input : N : 6
Elements : 85 11 3 15 11 111
Output : 2
*/

#include<stdlib.h>
#include<stdio.h>

int Frequency(int Arr[], int iLength)
{
    int i=0, Cnt=0;

    for(i=0;i<iLength;i++)
    {
        if(Arr[i] == 11)
        {
            Cnt++;
        }
    }
    return Cnt;
}
int main()
{
    int iSize = 0,iCnt = 0, iRet = 0;
    int *p = NULL;

    printf("\nEnter number of elements =>");
    scanf("%d",&iSize);

    p = (int *)malloc(iSize * sizeof(int));

    if(p == NULL)
    {
        printf("\nUnable to allocate memory =>");
        return -1;
    }

    printf("\nEnter %d elements ",iSize);

    for(iCnt = 0;iCnt<iSize; iCnt++)
    {
        printf("\nEnter element %d =>",iCnt+1);
        scanf("%d",&p[iCnt]);
    }

    iRet = Frequency(p, iSize);

    printf("\nFrequency of 11 is %d",iRet);

    free(p);

    return 0;
}
