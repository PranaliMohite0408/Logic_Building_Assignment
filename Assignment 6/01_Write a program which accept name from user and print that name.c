#include<stdio.h>
#include<conio.h>

int main()
{
    char Name[30];

    printf("\nPlease Enter full Name => ");
    gets(Name);

    printf("\nYour Name is %s",Name);

    getch();
    return 0;
}
