#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>  //universal standard .h


int main()
{
    unlink("Marvellous.txt");
    return 0;
}