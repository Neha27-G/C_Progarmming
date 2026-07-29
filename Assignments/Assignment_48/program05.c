/* Write a application which accept file name from user and one string from user. write that string at the end of file

Input : Demo.txt
        Hello World

Output : write Hello world at the end of Demo.txt file
*/

#include<stdio.h>
#include<io.h>
#include<fcntl.h>
#include<string.h>

int main()
{
    int fd = 0;
    char FileName[30];
    int iRet = 0;
    char Arr[100];

    printf("Enter the file Name :");
    scanf("%[^'\n']s",FileName);

    printf("Enter the String :\n");
    scanf(" %[^'\n']s",Arr);

    fd = open(FileName,O_RDWR | O_APPEND);

    if(fd == -1)
    {
        printf("Unable to open file\n");
    }
    else
    {
        printf("File gets Successfully Opened \n");

        iRet = write(fd,Arr,strlen(Arr));

        printf("%d bytes gets successfully writtern\n",iRet);

        close(fd);
    }

    return 0;
}