//Write a recursive program which display below pattern
//Input  : 6

//output :      A       B        C      D       E       F

#include<stdio.h>

void Display(char iNo)
{
    static char ch = 'A';

    if(iNo > 0)
    { 
        printf("%c\t",ch);
        ch++;

        Display(iNo - 1);
    }
}

int main()
{
    char iValue;

    printf("Enter the Number :");
    scanf("%d",&iValue);

    Display(iValue);
    printf("\n\n");

    return 0;
}