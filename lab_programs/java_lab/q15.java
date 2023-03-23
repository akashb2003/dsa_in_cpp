class Person
{
    String address;
    String name;
    
    Person(String address,
    String name)
    {
         this.address = address;
     this.name = name;
    }
    
    String getname()
    {
        return name;
    }
    
    String getaddress()
    {
        return address;
    }
    
    void setaddress(String address)
    {
        this.address = address;
    }
    
    public String toString()
    {
        return name + "("+address+")";
    }
}

class Student extends Person
{
    int numC = 0;
    String []courses = new String[30];
    int []grades = new int[30];
    
    Student(String name, String address)
    {
        super(address,name);
    }
    
    void addCouresGrade(String course, int grade)
    {
        if(numC>=29)
        {
            System.out.println("Full");
        }
        else
        {
            courses[numC] = course;
            grades[numC++] = grade;
        }
    }
    
    void printgrade()
    {
        System.out.println("Grades:");
        for(int i=0;i<numC;i++)
        {
            System.out.println(grades[i]);
        }
    }
    
    int avgg ()
    {
        int sum=0;
        for(int i=0;i<numC;i++)
        {
            sum = sum + grades[i];
        }
        return sum/numC;
    }
}

class Teacher extends Person
{
    int numC = 0;
    String []courses = new String[30];
    
    Teacher(String name, String address)
    {
        super(address,name);
    }
    
    boolean addC(String course)
    {
        if(numC>=4)
        {
            System.out.println("Full");
            return false;
        }
        else
        {
            int flag=1;
            for(int i=0;i<numC;i++)
            {
                if(courses[i].equals(course))
                {
                    flag =0;
                    break;
                }
            }
            if(flag==0)
            {
                System.out.println("Alredy exists");
                return false;
            }
            else
            {
                courses[numC++] = course;
                return true;
            }
        }
    }
    
    boolean removeC(String course)
    {
        if(numC==0)
        {
            System.out.println("Empty");
            return false;
        }
        else
        {
            for(int i=0;i<numC;i++)
            {
                if(courses[i].equals(course))
                {
                    courses[i]="";
                    numC--;
                    return true;
                }
            }
             System.out.println("Not found");
            return false;
        }
    }
    
}

public class q15
{
	public static void main(String[] args) 
	{
		Student s = new Student("abc","bcd");
		s.addCouresGrade("Math",69);
		s.addCouresGrade("sci",69);
		s.addCouresGrade("phy",69);
		s.addCouresGrade("chem",69);
		s.addCouresGrade("pe",69);
		s.printgrade();
	    System.out.println("Avg g = "+ s.avgg());
	     System.out.println(s);
	     
	    Teacher t = new Teacher("efd","bvcx");
	     System.out.println(t);
	    if(t.addC("Math"))
	    {
	        System.out.println("Added");
	    }
	    if(t.addC("Math"))
	    {
	        System.out.println("Added");
	    }
	    if(t.addC("phy"))
	    {
	        System.out.println("Added");
	    }
	    if(t.addC("sci"))
	    {
	        System.out.println("Added");
	    }
	    if(t.addC("eng"))
	    {
	        System.out.println("Added");
	    }
	    if(t.addC("chem"))
	    {
	        System.out.println("Added");
	    }
	    if(t.addC("eng"))
	    {
	        System.out.println("Added");
	    }
	    
	    if(t.removeC("Math"))
	    {
	        System.out.println("Removed");
	    }
	    if(t.removeC("phy"))
	    {
	        System.out.println("Removed");
	    }
	    if(t.removeC("sci"))
	    {
	        System.out.println("Removed");
	    }
	    if(t.removeC("eng"))
	    {
	        System.out.println("Removed");
	    }
	    if(t.removeC("chem"))
	    {
	        System.out.println("Removed");
	    }
	    if(t.removeC("eng"))
	    {
	        System.out.println("Removed");
	    }
	}
}

