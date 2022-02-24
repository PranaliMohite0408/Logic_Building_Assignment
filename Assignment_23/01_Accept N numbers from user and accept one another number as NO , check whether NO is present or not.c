///Accept N numbers from user and accept one another number as NO , check whether NO is present or not.

/*
    Input : N : 6
    NO: 66
    Elements : 85 66 3 66 93 88
    Output : TRUE
    Input : N : 6
    NO: 12
    Elements : 85 11 3 15 11 111
    Output : FALSE
*/

#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL Check(int Arr[], int iLength, int iNo)
{
    int i = 0;

    for(i=0;i<=iLength;i++)
    {
        if(iNo == Arr[i])
        {
            return TRUE;
        }

    }
    return FALSE;
}
int main()
{
    int iSize = 0,iRet = 0,iCnt = 0, iValue = 0;
    int *p = NULL;
    BOOL bRet = FALSE;

    printf("\nEnter number of Elements =>");
    scanf("%d",&iSize);

    printf("\nEnter the number =>");
    scanf("%d",&iValue);

    p = (int *)malloc(iSize * sizeof(int));

    if(p == NULL)
    {
        printf("\nUnable to allocate Memory...");
        return -1;
    }

    printf("\nEnter %d elements ",iSize);

    for(iCnt = 0;iCnt<iSize; iCnt++)
    {
        printf("\nEnter element %d =>",iCnt+1);
        scanf("%d",&p[iCnt]);
    }

    bRet = Check(p, iSize,iValue);

    if(bRet == TRUE)
    {
        printf("\nNumber is Present");
    }
    else
    {
        printf("Number is Not Present");
    }

    free(p);

    return 0;
}
