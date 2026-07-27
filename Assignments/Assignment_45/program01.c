//Write a recursive program which accept number from user and display below pattern
//Input  : 5

//output :      5   *   4   *   3   *   2   *   1   *


#include<stdio.h>

void Display(int iNo)
{
    if(iNo >= 1)
    { 
        printf("%d\t*\t",iNo);

        Display(iNo - 1);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the Number :");
    scanf("%d",&iValue);

    Display(iValue);
    printf("\n\n");

    return 0;
}