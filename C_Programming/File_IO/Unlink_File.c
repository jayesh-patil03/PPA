#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>

int main()
{
    int ret = 0;

    ret = unlink("Demo.txt");

    if(ret == -1)
    {
        printf("Unable to delete file\n");
        return EXIT_FAILURE;
    }
    else
    {
        printf("File gets successfully deleted");
    }

    return EXIT_SUCCESS;
}