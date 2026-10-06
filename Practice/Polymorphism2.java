
class Animal
{
    void run(){
        System.out.println("he can run");
    }

    void eat(){
        System.out.println("He can Eat");
    }
}

class Dog extends Animal
{
    void run(){
        System.out.println("Dog can run");
    }

    void eat(){
        System.out.println("Dog can Eat");
    }
}

public class Polymorphism2 {
    public static void main(String[] args) {

        Animal Puppy = new Dog();


        Puppy.eat();
        
    }
}
