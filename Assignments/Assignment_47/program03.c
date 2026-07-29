/* Write a program which accepts file name from user and count number of white characters from that file.

Input : Demo.txt

Output : Number of white spaces are 13
*/

#include<stdio.h>
#include<stdlib.h>
#include<io.h>
#include<fcntl.h>
#include<string.h>

#define ERR_OPEN -1
#define BUFFER_SIZE 1024

int CountWhite(char FName[])
{
    char Buffer[BUFFER_SIZE] = {'\0'};
    int fd = 0 ,iRet = 0, iCount = 0, i = 0;

    fd = open(FName,O_RDONLY);

    if(fd == -1)
    {
        return ERR_OPEN;
    }

    while((iRet = read(fd,Buffer,sizeof(Buffer))) != 0)
    {
        for(i = 0; i< iRet; i++)
        {
            if(Buffer[i] == ' ')
            {
                iCount++;
            }
        }
        memset(Buffer,'\0', sizeof(Buffer));    
    }
    close(fd);
    return iCount; 
}

int main()
{
    char FileName[30];
    int iRet = 0;

    printf("Enter the Filename :");
    scanf("%[^'\n']s",FileName);

    iRet = CountWhite(FileName);

    if(iRet == ERR_OPEN)
    {
        printf("Unable to open file \n");
    }
    else
    {
        printf("Number of White spaces are : %d\n",iRet);
    }

    return 0;
}