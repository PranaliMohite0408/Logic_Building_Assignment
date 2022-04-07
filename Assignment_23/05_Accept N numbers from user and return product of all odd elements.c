///Accept N numbers from user and return product of all odd elements.
/*
Input : N : 6
Elements : 15 66 3 70 10 88
Output : 45
Input : N : 6
Elements : 44 66 72 70 10 88
Output : 0
*/
#include<stdio.h>

int Product(int Arr[], int iLength)
{
    int i=0 , Mult = 1;
    for(i=0;i<=iLength;i++)
    {
        if(Arr[i]%2 != 0)
        {
            Mult = Mult* Arr[i];

            continue;
        }
        break;
    }

    return Mult;



}
int main()
{
    int iLength = 0,iRet = 0,iCnt = 0;
    int *p = NULL;

    printf("\nEnter number of elements =>");
    scanf("%d",&iLength);

    p = (int *)malloc(iLength * sizeof(int));

    if(p == NULL)
    {
        printf("\nUnable to allocate memory");
        return -1;
    }

    printf("\nEnter %d elements =>",iLength);

    for(iCnt = 0;iCnt<iLength; iCnt++)
    {
        printf("\nEnter element %d =>",iCnt+1);
        scanf("%d",&p[iCnt]);
    }

    iRet = Product(p, iLength);

    printf("\nProduct is %d ",iRet);

    free(p);

    return 0;
}

