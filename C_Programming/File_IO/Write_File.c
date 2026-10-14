#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>

int main()
{
    int fd = 0;

    fd = open("Hello.txt", O_RDWR);

    if(fd == -1)
    {
        printf("Unable to open file\n");

        return EXIT_FAILURE;
    }
    else
    {
        printf("File gets opened with fd :- %d\n", fd);

        write(fd, "Jay Ganesh...", 13);

        close(fd);
    }

    return EXIT_SUCCESS;
}