#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
    int fd = 0;
    char Arr[20] = {'\0'};

    fd = open("Hello.txt", O_RDONLY);

    if(fd == -1)
    {
        printf("Unable to open file\n");

        return EXIT_FAILURE;
    }
    else
    {
        printf("File gets opened with fd :- %d\n", fd);

        read(fd, Arr, 13);

        printf("data from file is : %s\n", Arr);

        close(fd);
    }

    return EXIT_SUCCESS;
}