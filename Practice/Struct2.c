#include<stdio.h>

struct VIRAJ
{
    int i;
    float f;

};


struct RAJ{

    int i;
    struct VIRAJ vobj;


};

int main()
{
    struct RAJ robj;

    robj.vobj.i = 10;

    robj.vobj.f = 56.39f;

    robj.i = 30;

    printf("%f\n", robj.vobj.f);





    return 0;
}