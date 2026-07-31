#include<stdio.h>

void Display(int *iptr)
{
    printf("Value of ptr : %d",iptr);
}

int main()
{
    int Arr[5] = {10,20,30,40,50};

    printf("Base Address of Arr : %d\n",Arr);

    Display(Arr);
   
    return 0;
}