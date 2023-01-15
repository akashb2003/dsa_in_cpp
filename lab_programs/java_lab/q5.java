import java.util.*;

abstract class Student
{
    public String name;
    public int age;
    public int id;
    public double grade;
    abstract boolean pass(double g);
    
    String getname()
    {
        return name;
    }
    
}

class under extends Student
{
    under(String na, int a, int i, double g)
    {
        name = na;
        age = a;
        id = i;
        grade = g;
    }
    
    void display () 
  {
    
System.out.println ("Name:" + getname () + "\nAge:" + age + "\nID:" + id);
  
} 

boolean pass(double g) 
  {
    
 grade = g;
    
if (grade <= 80)
      
 return false;
    
    else
      
return true;
  
}
}

class gg extends Student
{
    gg(String na, int a, int i, double g)
    {
        name = na;
        age = a;
        id = i;
        grade = g;
    }
    
    void display () 
  {
    
System.out.println ("Name:" + getname () + "\nAge:" + age + "\nID:" + id);
  
} 

boolean pass(double g) 
  {
    
 grade = g;
    
if (grade <= 70)
      
 return false;
    
    else
      
return true;
  
}
}

public class q5

{
  
public static void main (String[]args) 
  {
    Scanner ob = new Scanner(System.in);
    
    System.out.println ("Enter UG Student Details\n1.Name\n2.age\n3.id\n3.gard");
    
    String n1 = ob.next();
    int a1 = ob.nextInt();
    int i1 = ob.nextInt();
    double g1 = ob.nextDouble();
    under u = new under (n1,a1,i1,g1);
    
u.display ();
    
if (u.pass(g1))
      
System.out.println ("Student has passed\n");
    
    else
      
System.out.println ("Student has failed\n");
  
 System.out.println ("Enter Grade Student Details\n1.Name\n2.age\n3.id\n3.gard");
    
    String n2 = ob.next();
    int a2 = ob.nextInt();
    int i2 = ob.nextInt();
    double g2 = ob.nextDouble();
    gg g = new gg (n2,a2,i2,g2);    
    
g.display ();
    
if (g.pass(g2))
      
System.out.println ("Student has passed\n");
    
    else
      
System.out.println ("Student has failed\n");
}

}
