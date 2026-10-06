#include<stdio.h>

int main()
{

    int i = 10;
    int * p = &i;

    

    i++;
    p++;
    *p = 23;

    printf("%d\n", i);
    printf("%d\n", p);

   


    return 0;
}