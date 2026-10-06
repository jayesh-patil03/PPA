
import java.util.*;


class Selection1
{
    public static void main(String[] A) 
    {
     Scanner sobj = new Scanner(System.in);

     int No = 0;
     
     System.out.println("Enter No: ");
     No = sobj.nextInt();

     if((No % 2) == 0){
        System.out.println("Number is even");
     }
     else{
        System.out.println("Number is Odd");
     }
     
    }
}