/* Write a application which accept file name from user and open that file in read mode.

Input : Demo.txt

Output : File opened Successfully
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

    fd = open(FileName,O_RDONLY);

    if(fd == -1)
    {
        printf("Unable to Open file\n");
    }
    else
    {
        printf("File gets Successfully opened ");
        close(fd);
    }

    return 0;
}