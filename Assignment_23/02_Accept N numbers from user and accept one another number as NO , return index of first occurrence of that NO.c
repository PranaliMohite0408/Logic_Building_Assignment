///Accept N numbers from user and accept one another number as NO , return index of first occurrence of that NO.

/*
    Input : N : 6
    NO: 66
    Elements : 85 66 3 66 93 88
    Output : 1
    Input : N : 6
    NO: 12
    Elements : 85 11 3 15 11 111
    Output : -1
*/

#include<stdio.h>

int FirstOcc(int Arr[], int iLength, int iNo)
{
    int i = 0;

    for(i=0;i<=iLength;i++)
    {
        if(iNo == Arr[i])
        {
            break;
        }
    }
    if(i<iLength)
    {
        return i;
    }
    else
    {
        return -1;
    }
}
int main()
{
    int iSize = 0, iCnt = 0, iValue = 0, iRet = 0;
    int *p = NULL;

    printf("\nEnter number of elements =>");
    scanf("%d",&iSize);

    printf("\nEnter the number =>");
    scanf("%d",&iValue);

    p = (int *)malloc(iSize * sizeof(int));

    if(p == NULL)
    {
        printf("\nUnable to allocate memory =>");
        return -1;
    }

    printf("\nEnter %d elements =>",iSize);

    for(iCnt = 0;iCnt<iSize; iCnt++)
    {
        printf("\nEnter element %d =>",iCnt+1);
        scanf("%d",&p[iCnt]);
    }

    iRet = FirstOcc(p, iSize,iValue);

    if(iRet == -1)
    {
        printf("\nThere is no such Number");
    }
    else
    {
        printf("\nFirst occurrence of number is %d",iRet);
    }

    free(p);

    return 0;
}
