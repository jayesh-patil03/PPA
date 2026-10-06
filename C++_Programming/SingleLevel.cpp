#include <iostream>
using namespace std;

class Base
{
    public:
        int i,j;

        Base()
        {
            cout<<"Inside Base constructor\n";
        }

        ~Base()
        {
            cout<<"Inside Base destructor\n";
        }

        void fun()
        {
            cout<<"Inside Base fun method\n";
        }

        void gun()
        {
            cout<<"Inside Base gun method\n";
        }
};

class Derived : public Base
{
    public:
        int x,y;

        Derived()
        {
            cout<<"Inside Derived constructor\n";
        }

        ~Derived()
        {
            cout<<"Inside Derived destructor\n";
        }

        void sun()
        {
            cout<<"Inside Dervied sun Method\n";
        }
};


int main()
{
    cout<<sizeof(Base)<<"\n";
    cout<<sizeof(Derived)<<"\n";


    return 0;
}