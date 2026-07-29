/* Write a application which accept file name from user and display size of file.

Input : Demo.txt

Output : file size is 13 bytes
*/

#include<stdio.h>
#include<io.h>
#include<fcntl.h>

int main()
{
    int fd = 0;
    char FileName[30];
    int iRet = 0;

    printf("Enter the file Name :");
    scanf("%[^'\n']s",FileName);

    fd = open(FileName,O_RDWR);

    if(fd == -1)
    {
        printf("Unable to open file\n");
    }
    else
    {
        printf("File gets Successfully Opened \n");

        iRet = write(fd,"Jay Ganesh...",13);

        printf("%d bytes gets successfully writtern\n",iRet);

        close(fd);
    }

    return 0;
}