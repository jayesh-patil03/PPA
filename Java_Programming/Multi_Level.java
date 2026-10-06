class Base
{
    public int i, j;

    public Base()
    {
        System.out.println("Inside Base Constructor");
    }

    public void fun()
    {
        System.out.println("Inside Base fun method");
    }
}

class Derived extends Base
{
    public int x, y;

    public Derived()
    {
        System.out.println("Inside Derived Constructor");
    }

    public void gun()
    {
        System.out.println("inside Derived gun method");
    }
}

class DerivedX extends Derived
{
    public DerivedX()
    {
        System.out.println("inside DerivedX constructor");
    }

    public void sum()
    {
        System.out.println("inside DerievdX sum method");
    }
}



public class Multi_Level {
    public static void main(String[] args) {
        
        DerivedX dobj = new DerivedX();

        dobj.i = 11;

        dobj.fun();

        System.out.println(dobj.i);
    }
}
