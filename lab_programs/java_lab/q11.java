import java.util.*;

class Car
{
    int speed;
    double regularPrice; 
    String color;
    double getSalePrice()
    {
        return regularPrice;
    }
    
    Car(int speed,
    double regularPrice, 
    String color)
    {
    this.speed = speed; 
    this.regularPrice = regularPrice; 
    this.color = color;
    }
    
    public String toString()
    {
        return "speed "+ this.speed+" regularPrice "+ this.regularPrice + " color "+ this.color;
    }
}

class Truck extends Car
{
    int weight;
    
    Truck(int speed,
    double regularPrice, 
    String color,int w)
    {
        super(speed,regularPrice,color);
        weight = w;
    }
    
    double getSalePrice()
    {
        if(weight>2000)
        {
            return regularPrice*0.9;
        }
        else
        return regularPrice*0.8;
    }
    
}

class Ford extends Car
{
    int yom; 
    int manufacturerDiscount = 20000;
    
    Ford(int speed,
    double regularPrice, 
    String color,int y)
    {
        super(speed,regularPrice,color);
        yom = y;
    }
    
    double getSalePrice()
    {
        return regularPrice - manufacturerDiscount;
    }
    
}

class sedan extends Car
{
    int length;
    
    sedan(int speed,
    double regularPrice, 
    String color,int l)
    {
        super(speed,regularPrice,color);
        length = l;
    }
    
    double getSalePrice()
    {
        if(length>20)
        return regularPrice*0.95;
        else
        return regularPrice*0.9;
    }
    
}

public class q11
{
	public static void main(String[] args) 
	{
	    Car c = new Car(220,2500000,"red");
		Truck t = new Truck(200,2000000,"black",10000);
		Ford f = new Ford(180,1500000,"red",2019);
		sedan s = new sedan(190,1100000,"yellow",25);
		System.out.println(c);
		System.out.println(t);
		System.out.println(f);
		System.out.println(s);
		System.out.println("Final price 1.Truck = "+ t.getSalePrice()+" 2.Ford = "+ f.getSalePrice()
		+ " 3.sedan = "+ s.getSalePrice() + "4.Car = "+ c.getSalePrice());
		
		
	}
}
