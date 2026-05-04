#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>  //universal standard .h


int main()
{
    int fd = 0;
    int Ret = 0;
    char Arr[20];

    fd = open("Marvellous.txt",O_RDWR);
    if(fd == -1)
    {
        printf("Unable to open file");
    }
    else
    {
        printf("Files gets opened with fd %d",fd);

        Ret = read(fd,Arr,6);
        printf("%d Bytes gets read from the file\n",Ret);
        printf("%s \n",Arr);
    }
    close(fd);
    return 0;
}