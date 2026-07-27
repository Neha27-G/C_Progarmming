/* Write a recursive program which accept string from user and count number of Small characters

Input : HElloWOrlD

Output : 5

*/

#include<stdio.h>

int SmallChar(char *str)
{
    static int iCount = 0;

    if(*str != '\0')
    {
        if(*str >='a')
        {
            iCount++;
        }
        str++;
        SmallChar(str);
    }
    return iCount;
}

int main()
{
    char Arr[50];
    int iRet = 0;

    printf("Enter the string :");
    scanf("%[^\n]",Arr);

    iRet = SmallChar(Arr);
    printf("Number of Small characters are : %d\n",iRet);

    return 0;
}