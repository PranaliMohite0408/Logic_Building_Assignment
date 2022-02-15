///Accept N numbers from user and return frequency of even numbers.

/*

Input : N : 6
Elements : 85 66 3 80 93 88
Output : 3
*/

#include<stdio.h>

int CountEven(int Arr[], int iLength)
{
    int i = 0,Cnt=0;

    for(i=0;i<iLength;i++)
    {
        if(Arr[i]%2 == 0)
        {
            Cnt++;
        }
    }
    return Cnt;
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

    printf("\nEnter %d elements",iSize);

    for(iCnt = 0;iCnt<iSize; iCnt++)
    {
        printf("\nEnter element %d =>",iCnt+1);
        scanf("%d",&p[iCnt]);
    }

    iRet = CountEven(p, iSize);

    printf("\nFrequency of Even Number is %d",iRet);

    free(p);

    return 0;
}
