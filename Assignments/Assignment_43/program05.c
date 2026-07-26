//Write a recursive program which display below pattern

//output :      a       b       c       d       e       f

#include<stdio.h>

void Display()
{
    static char ch = 'a';

    if(ch <= 'f')
    { 
        printf("%c\t",ch);
        ch++;

        Display();
    }
}

int main()
{
    Display();
    printf("\n\n");

    return 0;
}