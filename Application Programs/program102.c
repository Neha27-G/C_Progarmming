#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool LinearSearch(int Arr[], int iSize)
{
    bool bFlag = false;
    int iCnt = 0;

    for(iCnt = 0 ; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] == 11)
        {
            bFlag = true;
            break;
        }
    }
    return bFlag;
}

int main()
{
    int *Brr = NULL;
    int iLength = 0, iCnt = 0;
    bool bRet = false;

    printf("Enter the Number of Elements :\n");
    scanf("%d",&iLength);

    Brr = (int *)malloc(sizeof(int) * iLength);

    printf("Enter the Elements :\n");

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d",&Brr[iCnt]);
    }

    bRet = LinearSearch(Brr, iLength);

    if(bRet == true)
    {
        printf("Elements is present\n");
    }
    else
    {
        printf("Elements is not present\n");
    }

    free(Brr);

    return 0;

}