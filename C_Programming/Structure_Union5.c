#include<stdio.h>

#pragma pack(1)
struct  Demo
{
  int i;
  float f;

  struct Hello
  {
    int no;
    float marks;
  }hobj;

};


int main()
{

    struct Demo dobj;

    printf("%d\n", sizeof(dobj));


    dobj.i = 11;
    dobj.f = 3.14;

    dobj.hobj.no = 20;
    dobj.hobj.marks = 99.43;
    


    return 0;
}