#include<iostream>
using namespace std;

#pragma pack(1)
class Base{
    public:
        int i,j;

        void fun(){                      // 1000
            cout<<"Inside base fun\n";
        }

        void gun(){                       // 2000
            cout<<"Inside Base gun\n";
        }

        virtual void sun(){                //3000
            cout<<"Inside base sun\n";
        }

        virtual void run(){              // 4000
            cout<<"Inside base run\n";
        }
}; // 16 bytes size 


#pragma pack(1)
class Derived : public Base{
    public:
        int x;

        void fun(){                         // 5000
            cout<<"Inside Derived fun\n";
        }

        void sun(){                        // 6000
            cout<<"Inside Derived sun\n";
        }

        virtual void mun(){                // 7000
            cout<<"Inside Derived mun\n";
        }

        void bun(){                          // 8000
            cout<<"Inside Derived bun\n";
        }


}; // 20 bytes size of derived class


int main(){

    Base * bp = new Derived();



    bp->fun();
    bp->gun();
    bp->sun();
    bp->run();
    //bp->mun(); // Error
    //bp->bun(); // Error

    return 0;
}