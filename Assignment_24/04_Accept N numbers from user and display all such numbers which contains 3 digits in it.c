///Accept N numbers from user and display all such numbers which contains 3 digits in it.

/*
Input : N : 6
Elements : 8225 665 3 76 953 858
Output : 665 953 858
*/
#include<stdio.h>

void Digits(int Arr[], int iLength)
{
    int i=0, Dig=0, Cnt=0, Temp=0;

    for(i=0;i<iLength;i++)
    {
        Temp = Arr[i];
        Cnt = 0;

        while(Temp>0)
        {
            Dig = Temp%10;
            Cnt++;
            Temp = Temp/10;
        }

        if(Cnt == 3)
        {
            printf("\nThree Digit Number is %d ", Arr[i]);
        }
    }

    return;
}

int main()
{
    int iSize = 0,iRet = 0,iCnt = 0;
    int *p = NULL;

    printf("\nEnter number of Elements =>");
    scanf("%d",&iSize);

    p = (int *)malloc(iSize * sizeof(int));

    if(p == NULL)
    {
        printf("\nUnable to allocate memory ");
        return -1;
    }

    printf("\nEnter %d elements " ,iSize);

    for(iCnt = 0;iCnt<iSize; iCnt++)
    {
        printf("\nEnter element %d :",iCnt+1);
        scanf("%d",&p[iCnt]);
    }
    Digits(p, iSize);

    free(p);

    return 0;
}
