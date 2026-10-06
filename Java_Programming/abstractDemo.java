

abstract class Base
{
    public int i, j;

       public int Addition(int no1, int no2){
            return no1 + no2;
        }

        public abstract  int Substraction(int no1, int no2);

}



class Derived extends  Base
{

        public int x;

        public int Substraction(int no1, int no2)
        {
            return no1 - no2;
        }

        public int Multiplication(int no1, int no2)
        {
            return no1 * no2;
        }
        

};

class abstarctDemo{
    public static void main(String[] args) {

        Derived dobj = new Derived();

        int ret = 0;

        ret = dobj.Addition(10, 11);
        System.out.println("Addition is : " + ret);

        ret = dobj.Substraction(11, 10);
        System.out.println("Substraction is : " + ret);

        ret = dobj.Multiplication(10, 11);
        System.out.println("Multiplication is : " + ret);


        
    }
}