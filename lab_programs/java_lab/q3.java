class Customer
{
    private int id;
    private String name;
    private int discount;
    
    Customer(int id, String name, int discount)
    {
        this.id = id;
        this.name = name;
        this.discount = discount;
    }
    
    int getid()
    {
        return id;
    }
    
    String getname()
    {
        return name;
    }
    
    int getdisc()
    {
        return discount;
    }
    
    void setdisc(int d)
    {
        discount =d;
    }
    
    String tostring()
    {
        return name+" ("+id+")";
    }
}

class Invoice
{
    private int id;
    Customer cus;
    private double amount;
    
    Invoice(int id, Customer cus, double amount)
    {
        this.id = id;
        this.cus = cus;
        this.amount = amount;
    }
    
    int getid()
    {
        return id;
    }
    
    Customer getcus()
    {
        return cus;
    }
    
    void setcus(Customer cus)
    {
        this.cus = cus;
    }
    
    String getamt()
    {
        return Double.toString(amount);
    }
    
    void setamt(double amt)
    {
        amount = amt;
    }
    
    String getcusName()
    {
        return cus.getname();
    }
    
    double getAmtAftDis()
    {
        return amount*cus.getdisc()/100;
    }
    
}

public class q3
{
	public static void main(String[] args) {
	    Customer c = new Customer(1234,"xxx",5);
	    System.out.println("cus details\n"+c.getid()+"\n"+c.getdisc()+"\n"+c.getname());
	     System.out.println("\nto String "+c.tostring());
	    c.setdisc(7);
	    System.out.println("\nNew disc "+c.getdisc());
	    
	    Customer c1 = new Customer(1235,"yyy",69);
	    Invoice i = new Invoice(1233,c1,6000);
	    System.out.println("invoice details\n"+i.getid()+"\n"+i.getcusName()+"\n"+i.getamt()+"\n"+i.getAmtAftDis());
	    i.setamt(8000);
	    System.out.println("\nto String "+c1.tostring());
	    System.out.println("After amt = 8000\n"+i.getid()+"\n"+i.getcusName()+"\n"+i.getamt()+"\n"+i.getAmtAftDis());
	   
	}
}

