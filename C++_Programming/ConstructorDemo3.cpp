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


    // PARAMETERIZED CONSTRUCTOR
    
    PPA(int A, int B)
    {
        cout<<"Inside Parametraized Constructor\n";
    }


    // COPY CONSTRUCTOR
    PPA(PPA &obj)
    {
        cout<<"Inside Copy Constructor\n";
    }

   
    ~PPA()
    {
        cout<<"Inside distructor\n";
    }

};


int main()
{

    PPA pobj1;          // DEFAULT
    PPA pobj2(11, 21);  // PARAMETRISED
    PPA pobj3(pobj1);   // COPY



    


    return 0;
}