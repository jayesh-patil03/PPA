 class Student{
        String name;
        int age;
        int roll_no;
        static String college = "BVCOE";
    }
    
    

    

class staticDemo{



    public static void main(String[] args){

        System.out.println(Student.college);
        Student s1 = new Student();

        System.out.println(s1.name);
        System.out.println(s1.college);

      
    }
}