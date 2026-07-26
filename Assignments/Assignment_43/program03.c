//Write a recursive program which display below pattern

//output :      5       4       3       2       1


#include<stdio.h>

void Display(int iNo)
{
    if(iNo >= 1)
    { 
        printf("%d\t",iNo);

        Display(--iNo);
    }
}

int main()
{
    Display(5);
    printf("\n\n");

    return 0;
}