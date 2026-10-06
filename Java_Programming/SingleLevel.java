 class Base
 {
    public int i, j;

    public Base()
    {
        System.out.println("Inside base constructor");
    }

    public void fun()
    {
        System.out.println("Inside base fun method");
    }

    public void gun()
    {
        System.out.println("Inside base gun method");
    }

 }

 class  Derived extends Base
 {
    public int x,y;

    public Derived()
    {
        System.out.println("Inside Derived constructor");
    }

    public void sun()
    {
        System.out.println("Inside Derived sun method");
    }
 }


class SingleLevel
{
    public static void main(String[] args) {
        
        Derived dobj = new Derived();

        dobj.fun();
        dobj.gun();
        dobj.sun();

    }
}