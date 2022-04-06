///Accept N numbers from user and accept Range, Display all elements from that range
/*
Input : N : 6
Start: 60
End : 90
Elements : 85 66 3 76 93 88
Output : 66 76 88
*/

#include<stdio.h>

int Range(int Arr[], int iLength, int iStart, int iEnd)
{
    int i =0;
    for(i=1;i<=iLength;i++)
    {
        if(Arr[i]>=iStart && Arr[i]<=iEnd)
        {
            printf(" %d ",Arr[i]);
            continue;
        }
    }
}

int main()
{
    int iLength = 0,iRet = 0,iCnt = 0, iValue1 = 0, iValue2=0;
    int *p = NULL;

    printf("\nEnter number of Elements =>");
    scanf("%d",&iLength);

    printf("\nEnter the starting Point=>");
    scanf("%d",&iValue1);

    printf("\nEnter the ending point =>");
    scanf("%d",&iValue2);

    p = (int *)malloc(iLength * sizeof(int));
    if(p == NULL)
    {
        printf("\nUnable to allocate memory");
        return -1;
    }
    printf("\nEnter %d elements =>",iLength);

    for(iCnt = 0;iCnt<iLength; iCnt++)
    {
        printf("\nEnter element : %d",iCnt+1);
        scanf("%d",&p[iCnt]);
    }

    iRet = Range(p, iLength,iValue1, iValue2);

    free(p);

    return 0;
}
