class acc
{
    static int annualInterestRate;
    private double savingsBalance;
    
    acc(double sav)
    {
        savingsBalance = sav;
    }
    
    static void modifyInterestRate(int n)
    {
        annualInterestRate = n;
    }
    
    void calculateMonthlyInterest()
    {
        double d = ((savingsBalance*annualInterestRate)/12);
        savingsBalance += d; 
        System.out.println("saving Balance "+ savingsBalance);
    }

}

public class q2
{
	public static void main(String[] args) {
	    
		acc server1 = new acc(8000);
		acc server2 = new acc(9000);
		acc.modifyInterestRate(4);
		System.out.println("\ninterst 4\n");
		 System.out.println("server 1");
		server1.calculateMonthlyInterest();
		System.out.println("server 2");
		server2.calculateMonthlyInterest();
		
		System.out.println("\ninterst 5\n");
		acc.modifyInterestRate(5);
		 System.out.println("server 1");
		server1.calculateMonthlyInterest();
		System.out.println("server 2");
		server2.calculateMonthlyInterest();
		
		
	}
}

