/* Write a recursive program which accept string from user and count white spaces

Input : HE llo WOr lD

Output : 3

*/

#include<stdio.h>

int WhiteSpace(char *str)
{
    static int iCount = 0;

    if(*str != '\0')
    {
        if(*str == ' ')
        {
            iCount++;
        }
        str++;
        WhiteSpace(str);
    }
    return iCount;
}

int main()
{
    char Arr[50];
    int iRet = 0;

    printf("Enter the string :");
    scanf("%[^\n]",Arr);

    iRet = WhiteSpace(Arr);
    printf("Number of WhiteSpaces are : %d\n",iRet);

    return 0;
}