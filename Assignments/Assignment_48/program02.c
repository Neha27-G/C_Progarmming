/* Write a application which accept file name from user and create that file.

Input : Demo.txt

Output : File created Successfully
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

    fd = creat(FileName,0777);

    if(fd == -1)
    {
        printf("Unable to create file\n");
    }
    else
    {
        printf("File gets Successfully created");
        close(fd);
    }

    return 0;
}