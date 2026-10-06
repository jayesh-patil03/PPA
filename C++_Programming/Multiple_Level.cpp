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

class Derived : public BaseA, BaseB
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
    cout<<sizeof(BaseA)<<"\n";
    cout<<sizeof(BaseB)<<"\n";
    cout<<sizeof(Derived)<<"\n";

    

    return 0;
}
