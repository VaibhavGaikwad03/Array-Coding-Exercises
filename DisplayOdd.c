#include<stdio.h>
#include<stdlib.h>

void DisplayEven(int Arr[], int iSize)
{
    int iCnt = 0;

    printf("Odd numbers are : \n");

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] % 2 != 0)
        {
            printf("%d\n",Arr[iCnt]);
        }
    }    
}

int main()
{
    int iLength = 0;
    int iCnt = 0;
    int *ptr = NULL;

    printf("Enter the number of Elements : \n");
    scanf("%d",&iLength);

    ptr = (int *)malloc(iLength * sizeof(int));

    printf("Enter the values of Array : \n");

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    DisplayEven(ptr, iLength);

    return 0;
}