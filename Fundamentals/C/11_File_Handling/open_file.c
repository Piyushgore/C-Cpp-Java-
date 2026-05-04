#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>  //universal standard .h


int main()
{
    int fd;
    fd = open("Marvellous.txt",O_RDWR);
    if(fd == -1)
    {
        printf("Unable to open file");
    }
    else
    {
        printf("Files gets opened with fd %d",fd);
    }
    return 0;
}