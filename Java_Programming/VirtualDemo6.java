
class Base{
    
        int i,j;

        void fun(){                      // 1000
            System.out.println("Inside base fun");
        }

        void gun(){                       // 2000
            System.out.println("Inside base gun");
        }

        void sun(){                //3000
            System.out.println("Inside base sun");
        }

        void run(){              // 4000
            System.out.println("Inside base run");
        }
} 

class Derived extends Base{

        int x;

        void fun(){                         // 5000
            System.out.println("Inside Derived fun");
        }

        void sun(){                        // 6000
            System.out.println("Inside Derived sun");
        }

        void mun(){                // 7000
            System.out.println("Inside Derived mun");
        }

        void bun(){                          // 8000
            System.out.println("Inside Derived bun");
        }
} 

class VirtualDemo6
{
 public static void main(String A[]){

    Base bp = new Derived();

    bp.fun();
    bp.gun();
    bp.sun();
    bp.run();
    //bp.mun(); // Error
    //bp.bun(); // Error


 }
}

