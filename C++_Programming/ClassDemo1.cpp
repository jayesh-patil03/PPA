#include<iostream>
using namespace std;


class PPA
{
    public:
        int No1;
        int No2;

        void Display()
        {
            cout<<"Inside Display\n";
        }

};


int main()
{

    PPA pobj;

    cout<<sizeof(pobj)<<"\n";  //  8 byte to object of PPA (physical memory on RAM)
    cout<<sizeof(PPA)<<"\n";  // 


    return 0;
}