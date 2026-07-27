//Write a recursive program which accept string from user and count number of characters.

//Input  : Hello

//output :  5


#include<stdio.h>

int Strlen(char *str)
{
    static int iCnt = 0;

    if(*str != '\0')
    {
        iCnt++;
        Strlen(str + 1);
    }
    return iCnt;
}

int main()
{
    int iRet = 0;
    char arr[20];

    printf("Enter the String :");
    scanf("%s",arr);

    iRet = Strlen(arr);
    printf("%d",iRet);

    return 0;
}