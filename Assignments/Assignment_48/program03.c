/* Write a application which accept file name from user and read all data from that file and display contents on screen.

Input : Demo.txt

Output : Display all the data of file.
*/

#include<stdio.h>
#include<io.h>
#include<fcntl.h>

int main()
{
    int fd = 0;
    char FileName[30];

    printf("Enter the file Name :");
    scanf("%[^'\n']s",FileName);

    fd = open(FileName,O_RDWR);

    if(fd == -1)
    {
        printf("Unable to open file\n");
    }
    else
    {
        printf("File gets Successfully Opened");
        write(fd,"Jay Ganesh...",13);

        close(fd);
    }

    return 0;
}