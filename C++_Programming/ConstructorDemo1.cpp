#include<iostream>
using namespace std;


class PPA
{
    public:
        int No1;
        int No2;


    // DEFAULT CONSTRUCTOR
    
    PPA()
    {
        cout<<"Inside Default Constructor\n";
    }

    ~PPA()
    {
        cout<<"Inside distructor\n";
    }

};


int main()
{

    PPA pobj1;
    PPA pobj2;



    


    return 0;
}