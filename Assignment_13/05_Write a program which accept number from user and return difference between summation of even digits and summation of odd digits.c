///Write a program which accept number from user and return difference between summation of even digits and summation of odd digits.

/*
    Input : 2395
    Output : -15 (2 - 17)
    Input : 1018
    Output : 6 (8 - 2)
*/

int CountDiff(int iNo)
{
    int Evn_Sum =0, Odd_Sum = 0, Diff =0, Dig =0;

    if(iNo<0)
    {
        printf("\nInvalid Number....");
        return -1;
    }

    while(iNo >0)
    {
        Dig = iNo % 10;

        if(Dig%2 == 0)
        {
            Evn_Sum = Evn_Sum + Dig;
        }
        else if(Dig%2 != 0)
        {
            Odd_Sum = Odd_Sum + Dig;
        }

        iNo = iNo / 10;

        Diff = Evn_Sum - Odd_Sum;
    }
    return Diff;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number =>");
    scanf("%d",&iValue);

    iRet = CountDiff(iValue);
    printf("%d",iRet);

    return 0;
}
