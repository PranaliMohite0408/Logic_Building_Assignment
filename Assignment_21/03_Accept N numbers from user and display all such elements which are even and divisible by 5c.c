///Accept N numbers from user and display all such elements which are even and divisible by 5

/*

Input : N : 6
Elements : 85 66 3 80 93 88
Output : 80

*/

#include<stdio.h>

void Display(int Arr[], int iLength)
{
    int i=0;
    for(i=0;i<iLength;i++)
    {
        if(Arr[i]%2==0 && Arr[i]%5==0)
        {
            printf("\nElements are Even and Divisible by 5 is = %d",Arr[i]);
        }
    }
    return;
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
        printf("\nUnable to allocate memory");
        return -1;
    }

    printf("\nEnter %d elements",iSize);

    for(iCnt = 0;iCnt<iSize; iCnt++)
    {
        printf("\nEnter element : %d =>",iCnt+1);
        scanf("%d",&p[iCnt]);
    }

    Display(p, iSize);

    free(p);

    return 0;
}
