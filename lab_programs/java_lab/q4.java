class person 
{
    private String name,address;
    
    person(String name, String address)
    {
        this.name = name;
        this.address = address;
    }
    
    public String getname()
    {
        return name;
    }
    
    public String getadd()
    {
        return address;
    }
    
    public String toString()
    {
        return name+" ("+address+")";
    }
}

class student extends person
{
    int count = 0;
    String course[] = new String[30];
    int grades[] = new int[30];
    
    student(String s, String n)
    {
        super(s,n);
    }
    
    void addCourseGrade(String c, int g)
    {
        if(count<30)
        {
            course[count]= c;
            grades[count]= g;
            count++;
        }
        else
        System.out.println("Cannot add more than 30 course");
    }
    
    void printG()
    {
        for(int i=0;i<count;i++)
        {
            System.out.println(grades[i]);
        }
    }
    
    double avgG()
    {
        double avg=0;
        for(int i=0;i<count;i++)
        {
            avg = avg+grades[i];
        }
        avg = avg/count;
        return avg;
    }
    
    public String toString()
    {
        return getname()+"("+getadd()+")";
    }
}

class teacher extends person
{
    int count=0;
    String course[] = new String[5];
    
    teacher(String n,String a)
    {
        super(n,a);
    }
    
    public String toString()
    {
        return getname()+"("+getadd()+")";
    }
    
    boolean addc(String c)
    {
        if(count<5)
        {
            for(int i=0;i<count;i++)
            {
                if(course[i].equals(c))
                {
                    System.out.println("Course alredy exist");
                    return false;
                }
                
            }
            
            course[count]=c;
            count++;
            return true;
        }
    
        else
        {
            System.out.println("Course over filled");
            return false;
        } 
    }
    
    boolean removec(String c)
    {
        if(count!=0)
        {
            for(int i=0;i<count;i++)
            {
                if(course[i].equals(c))
                {
                    course[i]=" ";
                    return true;
                }
            }
            
            System.out.println("Course doesnt exist");
            return false;
       }
       else
       {
       System.out.println("Empty course");
        return false;
       }
    }

}

public class q4
{
	public static void main(String[] args) {
		student s = new student("xxx","banglore");
		System.out.println(s.toString());
		s.addCourseGrade("math",98);
		s.addCourseGrade("science",100);
		s.addCourseGrade("bio",98);
		s.addCourseGrade("english",94);
		s.addCourseGrade("kannada",95);
		s.addCourseGrade("Coding",100);
		s.printG();
		System.out.println("Avg is "+s.avgG());
		
		teacher t = new teacher("yyy","nyc");
		System.out.println(t.toString());
		if(t.addc("Math"))
		{
		    System.out.println("Course added");
		}
		
		if(t.addc("Science"))
		{
		    System.out.println("Course added");
		}
		
		if(t.addc("Math"))
		{
		    System.out.println("Course added");
		}
		
		if(t.addc("Coding"))
		{
		    System.out.println("Course added");
		}
		
		if(t.removec("Coding"))
		{
		    System.out.println("Course removed");
		}
		
		if(t.removec("Coding"))
		{
		    System.out.println("Course removed");
		}
		
		if(t.removec("Math"))
		{
		    System.out.println("Course removed");
		}
		
		if(t.removec("Science"))
		{
		    System.out.println("Course removed");
		}
		
		if(t.removec("Science"))
		{
		    System.out.println("Course removed");
		}
	
	}
}
