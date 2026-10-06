class Cooking extends Thread
{
    private String task;

    public Cooking(String task) {
        this.task = task;
    }

    public void run()
    {
        System.out.println(task + " task is prapared by");
        Thread.currentThread().getName();
    }

    
}


class Multithreading1
{
    public static void main(String A[]) throws Exception
    {
        Thread t1 = new Cooking("pasta");
        Thread t2 = new Cooking("salad");
        Thread t3 = new Cooking("PavBhaaji");


        t1.start();
        t2.start();
        t3.start();

        t1.join();

        System.out.println("End of main");

    }
}