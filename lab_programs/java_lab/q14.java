class Customer
{
    int ID;
    String name;
    int discount;
    
	Customer(int ID,
    String name,
    int discount)
    {
    this.ID = ID;
    this.name = name;
    this.discount = discount;
    }
    
    String getname()
    {
        return name;
    }
    
    int getID()
    {
        return ID;
    }
    
    double getdiscount()
    {
        return discount;
    }
    
    void setdiscount(int x)
    {
        discount = x;
    }
    
    public String toString()
    {
        return name + "("+ID+")";
    }
}

class Invoice
{
    int ID;
    Customer customer;
    double amt;
    
    Invoice(int ID,
    Customer customer,
    double amt)
    {
        this.ID = ID;
        this.customer = customer;
        this.amt = amt;
    }
    
    Customer getCus()
    {
        return customer;
    }
    
    String getamt()
    {
        return Double.toString(amt);
    }
    
    int getID()
    {
        return ID;
    }
    
    void setCus(Customer customer)
    {
        this.customer = customer;
    }
    
    void setAmt(double amt)
    {
        this.amt = amt;
    }
    
    String getCusName()
    {
        return customer.getname();
    }
    
    double AmtDis()
    {
        return amt*(1 - customer.getdiscount()/100);
    }
}

public class q14
{
	public static void main(String[] args) 
	{
		Customer c = new Customer(123,"ab",10);
		System.out.println(c);
		System.out.println(c.getdiscount());
		System.out.println(c.getname());
		System.out.println(c.getID());
		c.setdiscount(7);
		System.out.println("After modify");
		System.out.println(c.getdiscount());
		
		Customer c1 = new Customer(12345,"abcd",15);
	    Invoice i = new Invoice(222,c1,10000);
		System.out.println(i.getCusName());
		System.out.println(i.getamt());
		System.out.println(i.getID());
		System.out.println(i.getCus());
		i.setAmt(92000.0);
		System.out.println("After modify");
		System.out.println(i.AmtDis());
	}
}

