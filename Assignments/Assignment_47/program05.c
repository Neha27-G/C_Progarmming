/* Write a program which accepts file name and one count from user and read taht number of characters from starting position.

Input : Demo.txt                 12

Output : Display first 12 characters from Demo.txt
*/

#include<stdio.h>
#include<stdlib.h>
#include<io.h>
#include<fcntl.h>
#include<string.h>

#define ERR_OPEN -1
#define BUFFER_SIZE 1024

void DisplayN(char FName[],int iSize)
{
    char Buffer[BUFFER_SIZE] = {'\0'};
    int fd = 0 ,iRet = 0;

    fd = open(FName,O_RDONLY);

    if(fd == -1)
    {
        printf("Unable to open file \n");
        return ;
    }

    iRet = read(fd, Buffer,iSize);

    printf("Data from file is : \n");

    write(1,Buffer,iRet);

    close(fd);
}

int main()
{
    char FileName[30];
    int iValue = 0;

    printf("Enter the Filename :");
    scanf("%[^'\n']s",FileName);

    printf("Enter the number of Characters :");
    scanf("%d",&iValue);

    DisplayN(FileName , iValue);

    return 0;
}