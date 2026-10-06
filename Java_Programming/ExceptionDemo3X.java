import java.util.Scanner;

class Demo
{
    public static int Division(int No1, int No2) throws ArithmeticException
    {
        return  No1/No2;
    }
}


public class ExceptionDemo3X {
    public static void main(String[] args) {

        Scanner sobj = new Scanner(System.in);

        int No1=0, No2=0, Ans=0;

        System.out.println("Enter first Number : ");
        No1 = sobj.nextInt();

        System.out.println("Enter second Number : ");
        No2 = sobj.nextInt();

        Ans = Demo.Division(No1, No2);          // Exception Prone Code

        System.out.println("Division is : " + Ans);
    }
}
 
    

