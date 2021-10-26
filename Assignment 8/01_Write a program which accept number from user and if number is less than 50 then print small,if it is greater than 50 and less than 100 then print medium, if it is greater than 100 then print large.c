///Input : 75
///Output : Medium

#include<stdio.h>
#include<conio.h>

void Number(int iNo)
{
    if(iNo<0)
    {
        printf("\nInvalid Number!!!");
    }

    if(iNo<50)
    {
        printf("\nNumber is Small !!!!");
    }
    else if(iNo>=50 && iNo<=100)
    {
        printf("\nNumber is Medium !!!");
    }
    else
    {
        printf("\nNumber is Greater !!!");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter Number =>");
    scanf("%d",&iValue);

    Number(iValue);

    return 0;
}
