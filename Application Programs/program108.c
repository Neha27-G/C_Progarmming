#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

// Time complexity  : O(N)
int Minimum(int Arr[], int iSize)
{
    int iCnt = 0;
    int iMin = 0;

    iMin = Arr[0];

    for(iCnt = 0 ; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] < iMin)
        {
            iMin = Arr[iCnt];
        }
    }
    return iMin;
}

int main()
{
    int *Brr = NULL;
    int iLength = 0, iCnt = 0, iRet = 0;

    printf("Enter the Number of Elements :\n");
    scanf("%d",&iLength);

    Brr = (int *)malloc(sizeof(int) * iLength);

    printf("Enter the Elements :\n");

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d",&Brr[iCnt]);
    }

    iRet = Minimum(Brr, iLength);
    printf("Minimum elements are : %d\n",iRet);

    free(Brr);

    return 0;

}