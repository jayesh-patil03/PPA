
class Calculations
{
    int add(int a, int b){
        return a+b;
    }

    // Method Overloading  ---->>>>> static or compile time polymorphism
    int add(int a, int b, int c){
        return a+b+c;
    }
}



public class Polymorphism1 {
    public static void main(String A[]){

        Calculations cal = new Calculations();

        System.out.println(cal.add(5,6));

        System.out.println(cal.add(5,6, 9));

    }
}
