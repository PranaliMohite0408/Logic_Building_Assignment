/*Accept character from user. If it is capital then display all the characters from the input characters till Z. If input character is small
then print all the characters in reverse order till a. In other cases return directly.
Input : Q
Output : Q R S T U V W X Y Z
Input : m
Output : m l k j i h g f e d c b a
*/

#include<stdio.h>

void Display(char ch)
{
    int i = 0;

    if(ch>='A' && ch <= 'Z')
    {
        for(i=ch; ch<='Z'; ch++)
        {
            printf(" %c ",ch);
        }
    }
    else
    {
        if(ch>='a' && ch<= 'z')
        {
            for(i=ch; ch>='a'; ch--)
            {
                printf(" %c ", ch);
            }
        }
        else
        {
            printf("\nGiven Character is Invalid !!!!");
        }
    }
}
int main()
{
    char cValue = '\0';

    printf("\nEnter the Character =>");
    scanf("%c",&cValue);

    Display(cValue);

    return 0;
}
