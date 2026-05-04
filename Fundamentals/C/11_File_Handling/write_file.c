#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>  //universal standard .h


int main()
{
    int fd = 0;
    int Ret = 0;
    char Arr[] = "Marvellous Infosystems";

    fd = open("Marvellous.txt",O_RDWR);
    if(fd == -1)
    {
        printf("Unable to open file");
    }
    else
    {
        printf("Files gets opened with fd %d",fd);

        Ret = write(fd,Arr,10);
        printf("%d Bytes gets returned into the file\n",Ret);
    }
    close(fd);
    return 0;
}