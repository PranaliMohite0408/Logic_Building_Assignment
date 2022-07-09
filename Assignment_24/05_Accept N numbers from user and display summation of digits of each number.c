/*Accept N numbers from user and display summation of digits of each number.
 Input :  N :   6
 Elements : 8225  665 3 76 953 858
 Output : 17 17 3 13 17 21
*/

#include<stdio.h>
#include<malloc.h>


void  DigitsSum(int Arr[], int iLength)
{
          int i = 0,Dig = 0,Temp = 0,Sum = 0;

          for(i = 0;i < iLength;i++)
          {
                  Temp = Arr[i];
                  Sum = 0;  // Reinitialized Sum Variable Because Sum Value Is Increase In Loop

                  while(Temp > 0)
                  {
                             Dig = Temp%10;
                             Sum = Sum + Dig;
                             Temp/=10;
                  }

                  printf("\n %d. Element Digit Sum is => %d.",i+1,Sum);
          }

          return;
}

int main()
 {
              int iSize = 0,iCnt = 0;
              int *p = NULL;
              int iRet = 0;

              printf("\n Enter number of elements =>");
              scanf("%d",&iSize);

               p = (int *)malloc(iSize * sizeof(int));

               if(p == NULL)
               {
                               printf(" \n Unable to allocate memory");
                                return -1;
                }

                for(iCnt = 0;iCnt < iSize;iCnt++)
                {
                             printf("\n Given Element %d is => %d.",iCnt+1,p[iCnt]);
                }

                for(iCnt = 0;iCnt<iSize; iCnt++)
                {
                               printf("\n Enter element %d => ",iCnt+1);
                               scanf("%d",&p[iCnt]);
                }


             DigitsSum(p, iSize);

            free(p);

            return 0;
}

