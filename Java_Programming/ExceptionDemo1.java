
import java.util.Scanner;


public class ExceptionDemo1 {
    public static void main(String[] args) {

        Scanner sobj = new Scanner(System.in);

        int No1=0, No2=0, Ans=0;

        System.out.println("Enter first Number : ");
        No1 = sobj.nextInt();

        System.out.println("Enter second Number : ");
        No2 = sobj.nextInt();

        Ans = No1/No2;          // Exception Prone Code

        System.out.println("Division is : " + Ans);
    }
}
