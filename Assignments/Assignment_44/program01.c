//Write a recursive program which display below pattern
//Input  : 5

//output :      *      *      *      *       *


#include<stdio.h>

void Display(int iNo)
{
    static int i = 1;

    if(i<= iNo)
    { 
        printf("*\t");
        i++;

        Display(iNo);
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