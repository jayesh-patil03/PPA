#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>

int main()
{
    int fd = 0;
    char Arr[] = "Marvellous Infosystems";

    fd = open("Hello.txt", O_RDWR | O_APPEND);

    if(fd == -1)
    {
        printf("Unable to open file\n");

        return EXIT_FAILURE;
    }
    else
    {
        printf("File gets opened with fd :- %d\n", fd);

        write(fd, Arr, 10);

        close(fd);
    }

    return EXIT_SUCCESS;
}