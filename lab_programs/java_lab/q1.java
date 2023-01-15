import java.util.Scanner;

class car
{
    int speed;
    double regularPrice;
    String color; 
    
    car(int s,double p, String c)
    {
        speed = s; 
        regularPrice = p;
        color = c;
    }
    
    double getSalePrice()
    {
        return regularPrice;
    }
}

class truck extends car
{
   int weight;
   truck(int s, double p, String c, int w)
   {
       super(s,p,c);
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
   
   void getdata()
   {
       System.out.println("truck\n\nspeed "+speed+"\nprice "+regularPrice+"\ncolor "+color+"\nweight"+weight);
   }
}


class ford extends car
{
   int yom;
   double intmanufacturerDiscount;
   ford(int s, double p, String c, int y, double dd)
   {
       super(s,p,c);
       yom = y;
       intmanufacturerDiscount = dd;
   }
   
   double getSalePrice()
   {
       return regularPrice-intmanufacturerDiscount;
   }
   
   void getdata()
   {
       System.out.println("ford\n\nspeed "+speed+"\nprice "+regularPrice+"\ncolor "+color+"\nyear of manufacture "+yom+"\nmanufacturer Discount "+ intmanufacturerDiscount);
   }
}


class sedan extends car
{
   int len;
   sedan(int s, double p, String c, int l)
   {
       super(s,p,c);
       len = l;
   }
   
   double getSalePrice()
   {
       if(len>20)
       {
           return regularPrice*0.95;
       }
       else
       return regularPrice*0.9;
   }
   
   void getdata()
   {
       System.out.println("Sedan\n\nspeed "+speed+"\nprice "+regularPrice+"\ncolor "+color+"\nlength "+len);
   }
   
}

public class q1
{
	public static void main(String[] args)
	{
	    truck t = new truck(200,1200000,"red",2500);
	    ford f = new ford(400,2000000,"blue",2022,5000);
	    sedan s = new sedan(500,2200000,"black",21);
	    t.getdata();
		System.out.println("\nTotal price of truck after discount: "+ t.getSalePrice());
		f.getdata();
		System.out.println("\nTotal price of ford after discount: "+ f.getSalePrice());
		s.getdata();
		System.out.println("\nTotal price sedan after discount: "+ s.getSalePrice());
	}
}

