///Accept N numbers from user and accept one another number as NO , return frequency of NO form it.

/*
Input : N : 6
NO: 66
Elements : 85 66 3 66 93 88
Output : 2
Input : N : 6
NO: 12
Elements : 85 11 3 15 11 111
Output : 0
*/

#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[], int iLength, int iNo)
{
    int i=0, Cnt=0;

    for(i=0;i<iLength;i++)
    {
        if(Arr[i] == iNo)
        {
            Cnt++;
        }
    }

    return Cnt;
}

int main()
{
    int iSize = 0,iCnt = 0, iRet = 0, iValue = 0;
    int *p = NULL;

    printf("\nEnter number of elements =>");
    scanf("%d",&iSize);

    printf("\nEnter the number =>");
    scanf("%d",&iValue);

    p = (int *)malloc(iSize * sizeof(int));

    if(p == NULL)
    {
        printf("\nUnable to allocate memory....");
        return -1;
    }

    printf("\nEnter %d elements ",iSize);

    for(iCnt = 0;iCnt<iSize; iCnt++)
    {
        printf("\nEnter element %d =>",iCnt+1);
        scanf("%d",&p[iCnt]);
    }

    iRet = Frequency(p, iSize,iValue);

    printf("\nCount of Entered Number is %d",iRet);

    free(p);

    return 0;
}
