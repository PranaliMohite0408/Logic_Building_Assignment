#include<stdio.h>
#include<conio.h>
int MultFact(int iNo)
{
    int i=0 , MFact =1;

    for(i=1;i<iNo;i++)
    {
        if(iNo%i==0)
        {
            printf("\t %d",i);
            MFact*=i;
        }
    }
    return MFact;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number => ");
    scanf("%d",&iValue);

    iRet = MultFact(iValue);
    printf("\n\t%d",iRet);

    return 0;
}
