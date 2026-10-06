class Arithematic
{
    public int No1;
    public int No2;

    public Arithematic(){
        this.No1 = 0;
        this.No2 = 0;
    }

    public Arithematic(int a, int b){
        this.No1 = a;
        this.No2 = b;
    }

    public int Addition(){
       int Ans = 0;
       Ans = this.No1 + this.No2;
       return Ans;
    }

    public int Substraction(){
       int Ans = 0;
       Ans = this.No1 - this.No2;
       return Ans;
    }
}



class OOPXX 
{
    public static void main(String[] args) {

        Arithematic aobj1 = new Arithematic(21,11);

        int Result = 0;

        Result = aobj1.Addition();

        System.out.println("Addition is : " + Result);

        Result = aobj1.Substraction();

        System.out.println("Substraction is : " + Result);

        

    }
}
