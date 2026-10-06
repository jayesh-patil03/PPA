#include<stdio.h>

struct Hello 
{
    int i; 
    float f;
    int arr[3];

    struct Hello * dp;
};

int main()
{

    struct Hello hobj;

    // variable initailazation
    hobj.i = 10;
    hobj.f = 47.8373f;


    // pointer initialization


    // array initialization
    hobj.arr[0] = 30;
    hobj.arr[1] = 40;
    hobj.arr[2] = 50;

    printf("%d\n", hobj.i);
    printf("%d\n", hobj.arr[2]);




    return 0;
}