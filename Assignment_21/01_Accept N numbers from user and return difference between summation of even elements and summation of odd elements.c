///Accept N numbers from user and return difference between summation of even elements and summation of odd elements.

/*
    Input : N : 6
    Elements : 85 66 3 80 93 88
    Output : 53 (234 - 181)
*/

#include<stdio.h>

int Difference(int Arr[], int iLength)
{
    int i=0, Odd_Sum=0, Even_Sum=0, Diff=0;

    for(i=0;i<iLength;i++)
    {
        if(Arr[i]%2 == 0)
        {
            Even_Sum = Even_Sum + Arr[i];
        }
        else
        {
            Odd_Sum = Odd_Sum + Arr[i];
        }
    }
     return Even_Sum - Odd_Sum;
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
        printf("\nUnable to allocate memory..");
        return -1;
    }

    printf("Enter %d elements ",iSize);

    for(iCnt = 0;iCnt<iSize; iCnt++)
    {
        printf("\nEnter element : %d =>",iCnt+1);
        scanf("%d",&p[iCnt]);
    }

    iRet = Difference(p, iSize);

    printf("Result is %d",iRet);

    free(p);

    return 0;
}
