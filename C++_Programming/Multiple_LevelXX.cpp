#include<iostream>
using namespace std;

class BaseA
{
    public:
        int i,j;

        BaseA()
        {
            cout<<"Inside BaseA constructor\n";
        }

        ~BaseA()
        {
            cout<<"Inside BaseA destructor\n";
        }

        void fun()
        {
            cout<<"Inside BaseA fun Method\n";
        }
};

class BaseB
{
    public:
        int x,y;

        BaseB()
        {
            cout<<"Inside BaseB constructor\n";
        }

        ~BaseB()
        {
            cout<<"Inside BaseB destructor\n";
        }

        void gun()
        {
            cout<<"Inside BaseB gun Method\n";
        }
};

class Derived : public BaseB, public BaseA
{
    public:
        int a;

        Derived()
        {
            cout<<"Inside Derived constructor\n";
        }

        ~Derived()
        {
            cout<<"Inside Derived constructor\n";
        }

        void sun()
        {
            cout<<"Inside Derived sun method";
        }
};

int main()
{
    Derived dobj;

    dobj.fun();
    dobj.gun();
    dobj.sun();

    

    return 0;
}
