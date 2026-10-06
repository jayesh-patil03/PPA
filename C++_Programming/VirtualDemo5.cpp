#include<iostream>
using namespace std;

#pragma pack(1)
class Base{
    public:
        int i,j;

        void fun(){
            cout<<"Inside base fun\n";
        }

        void gun(){
            cout<<"Inside Base gun\n";
        }

        virtual void sun(){
            cout<<"Inside base sun\n";
        }

        virtual void run(){
            cout<<"Inside base run\n";
        }
}; // 16 bytes size 


#pragma pack(1)
class Derived : public Base{
    public:
        int x;

        void fun(){
            cout<<"Inside Derived fun\n";
        }

        void sun(){
            cout<<"Inside Derived sun\n";
        }

        virtual void mun(){
            cout<<"Inside Derived mun\n";
        }

        void bun(){
            cout<<"Inside Derived bun\n";
        }


}; // 20 bytes size of derived class


int main(){

    Base * bp = new Derived();

    cout<<sizeof(Base)<<"\n";
    cout<<sizeof(Derived)<<"\n";


    bp->fun();
    bp->gun();
    bp->sun();
    bp->run();
    //bp->mun(); // Error
    //bp->bun(); // Error

    return 0;
}