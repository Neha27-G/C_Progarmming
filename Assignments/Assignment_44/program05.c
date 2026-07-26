//Write a recursive program which display below pattern

//Input  : 6

//output :      a       b       c       d       e       f

#include<stdio.h>

void Display(char iNo)
{
    static char ch = 'a';

    if(iNo > 0)
    { 
        printf("%c\t",ch);
        ch++;

        Display(--iNo);
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