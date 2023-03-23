class savingAcc
{
	static int annualInterestRate;
	private double savingsBalance;
	
	savingAcc(int y)
	{
	    savingsBalance = y;
	}
	
	static void modify(int x)
	{
	    annualInterestRate = x;
	}
	
	double calculateMonthlyInterest()
	{
	    double ans = (savingsBalance * annualInterestRate / 12);
	    savingsBalance = savingsBalance + ans;
	    return savingsBalance;
	}
	
}

public class q13
{
	public static void main(String[] args) 
	{
		savingAcc s1 = new savingAcc(2000);
		savingAcc s2 = new savingAcc(3000);
		s1.modify(4);
		s2.modify(4);
		System.out.println("ans fors s1 = "+ s1.calculateMonthlyInterest());
		System.out.println("ans fors s2 = "+ s2.calculateMonthlyInterest());
		s1.modify(5);
		s2.modify(5);
		System.out.println("After 5");
		System.out.println("ans fors s1 = "+ s1.calculateMonthlyInterest());
		System.out.println("ans fors s2 = "+ s2.calculateMonthlyInterest());
	}
}

