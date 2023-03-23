import java.util.*;

abstract class Shape
{
    boolean filled;
    String color;
    
    Shape()
    {
        filled = true;
        color = "green";
    }
    
    Shape(boolean filled, String color)
    {
        this.filled = filled;
        this.color = color;
    }
    
    boolean getFill()
    {
        return filled;
    }
    
    void setFill(boolean filled)
    {
        this.filled = filled;
    }
    
    String getColor()
    {
        return color;
    }
    
    void setColor(String color)
    {
        this.color = color;
    }
    
    public String toString()
    {
        if(filled == false)
        return "Filled false, color = " + color;
        else
        return "Filled true, color = " + color;
    }
    
}

class Circle extends Shape
{
    int r;
 
Circle(boolean fill, String color,int r1)
 {
    super(fill,color);
    r = r1;
 }
 

 
Circle(int r1)
 {
    r = r1;
 }
 

double getArea()
{
    return 3.14*r*r;
}

 public String toString()
{
    return "Circle, raduis = "+ r + " "+super.toString();
}

}

final class rect extends Shape
{
    int l,b;
 
rect(boolean fill, String color,int l1, int b1)
 {
    super(fill,color);
    l = l1;
    b = b1;
 }
 

 
rect(int l1, int b1)
 {
    l = l1;
    b = b1;
 }
 

double getArea()
{
    return b*l;
}

public String toString()
{
    return "Rectangle, l = "+ l +" b = "+ b+  " "+ super.toString();
}

}

public class q9
{
	public static void main(String[] args) 
	{
		Circle c = new Circle(false,"red",10);
		System.out.println("Area of c "+ c.getArea());
		
		rect r = new rect(false,"yellow",10,10);
		System.out.println("Area of r "+ r.getArea());
		
		System.out.println("get function for c, color "+ c.getColor()+ " filled "+c.getFill());
	    System.out.println("get function for r, color "+ r.getColor()+ " filled "+r.getFill());
	    
	    c.setColor("pink");
	    c.setFill(false);
	    
	    r.setColor("black");
	    r.setFill(false);
	    
	    System.out.println("after set function for c, color "+ c.getColor()+ " filled "+c.getFill());
	    System.out.println("after set function for r, color "+ r.getColor()+ " filled "+r.getFill());
		
		Circle c1 = new Circle(10);
		System.out.println("Area of c1 "+ c1.getArea());
		
		rect r1 = new rect(10,10);
		System.out.println("Area of r1 "+ r1.getArea());
		
		System.out.println("get function for c1, color "+ c1.getColor()+ " filled "+c1.getFill());
	    System.out.println("get function for r1, color "+ r1.getColor()+ " filled "+r1.getFill());
		
	}
}
