import java.util.*;

abstract class Student
{
    String name;
    int ID;
    double grade;
    int age;
    
    Student(String name,int ID,int age)
    {
        this.name = name;
        this.ID = ID;
        this.age = age;
    }
    
    abstract boolean isPassed(double grade);
}

class Undergrad extends Student
{
    Undergrad(String name,int ID,int age)
    {
        super(name,ID,age);
    }
    
    boolean isPassed(double grade)
    {
        if(grade>=70)
        return true;
        
        else
        return false;
    }
    
   String display()
    {
        return "name "+name+" ID "+ID+" age "+age;
    }
}

final class grad extends Student
{
    grad(String name,int ID,int age)
    {
        super(name,ID,age);
    }
    
    boolean isPassed(double grade)
    {
        if(grade>=80)
        return true;
        
        else
        return false;
    }
    
   String display()
    {
        return "name "+name+" ID "+ID+" age "+age;
    }
}

public class q10
{
	public static void main(String[] args) 
	{
		Undergrad u = new Undergrad("abc", 1234, 18);
		System.out.println(u.display());
		if(u.isPassed(80.0))
		{
		    System.out.println("Pass");
		}
		else
		{
		    System.out.println("Fail");   
		}
		
		grad g = new grad("bcd", 1234534, 22);
		System.out.println(g.display());
		if(g.isPassed(90.0))
		{
		    System.out.println("Pass");
		}
		else
		{
		    System.out.println("Fail");   
		}
	}
}
