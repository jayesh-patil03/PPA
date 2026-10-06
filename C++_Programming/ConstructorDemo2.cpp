#include<iostream>
using namespace std;


class PPA
{
    public:
        int No1;
        int No2;


    PPA()
    {
        cout<<"Inside Default Constructor\n";
    }


    // PARAMETERIZED CONSTRUCTOR
    
    PPA(int A, int B)
    {
        cout<<"Inside Parametraized Constructor\n";
    }

    ~PPA()
    {
        cout<<"Inside distructor\n";
    }

};


int main()
{

    PPA pobj1;
    PPA pobj2(11, 21);



    


    return 0;
}