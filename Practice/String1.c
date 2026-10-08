#include<stdio.h>

int main()
{

    char Arr[] = {'H','E','L','L','O','\0'};

    char * p = &(Arr[0]);

    int i = 0;

    while ( *p != '\0')
    {
       i++;
       p++; 
    }

    printf("%d",i);
    

    return 0;
}