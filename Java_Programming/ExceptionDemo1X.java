
import java.util.Scanner;

public class ExceptionDemo1X {
    public static void main(String[] args) {

        Scanner sobj = new Scanner(System.in);

        int No1=0, No2=0, Ans=0;

        try{
          System.out.println("Enter first Number : ");
          No1 = sobj.nextInt();

          System.out.println("Enter second Number : ");
          No2 = sobj.nextInt();

          Ans = No1/No2;          // Exception Prone Code
        }
        catch(ArithmeticException aobj)
        {
           System.out.println("Exception occured : " + aobj);
        }
        finally
        {
            System.out.println("inside Finally block");
        }

        System.out.println("Division is : " + Ans);
    }
}
