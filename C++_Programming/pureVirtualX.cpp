#include<iostream>
using namespace std;

#pragma pack(1)
class Base
{
    public:
        int i, j;

        int Addition(int no1, int no2){
            return no1 + no2;
        }

        virtual int Substraction(int no1, int no2) = 0;

};


#pragma pack(1)
class Derived : public Base
{
    public:
        int x;

        int Substraction(int no1, int no2)
        {
            return no1 - no2;
        }

        int Multiplication(int no1, int no2)
        {
            return no1 * no2;
        }
        

};

int main(){


    Derived dobj;

    int ret = 0;

    cout<<"size of base is : "<<sizeof(Base)<<"\n";

    cout<<"size of Derived is : "<<sizeof(Derived)<<"\n";

    ret = dobj.Addition(11,10);

    cout<<"Addition is : "<< ret<<"\n";


    ret = dobj.Substraction(11,10);

    cout<<"Sub is : "<< ret<<"\n";

    ret = dobj.Multiplication(11,10);
    cout<<"Mul is : "<< ret<<"\n";

    return 0;
}