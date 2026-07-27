/* Write a recursive program which accept number from user and return reverse number

Input : 524

Output : 425

*/

#include<stdio.h>

int Reverse(int iNo)
{
    static int iRev = 0;
    int iDigit = 0;

    if(iNo != 0)
    {
        iDigit = iNo % 10;
        iRev = (iRev * 10) + iDigit;
        Reverse(iNo/10);
    }
    return iRev;   
}

int main()
{
    int iRet = 0;
    int iValue = 0;

    printf("Enter the Number :");
    scanf("%d",&iValue);

    iRet = Reverse(iValue);
    printf("Reversed Number is : %d\n",iRet);

    return 0;
}