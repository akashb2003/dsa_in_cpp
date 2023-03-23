class myExp extends Exception
{
    public String toString()
    {
        return "Not valid";
    }
}

public class q17
{
	public static void main(String[] args) throws myExp
	{
		int a=3,b=3,c=3;
		try {
		    if(a<b+c && b<a+b && c<a+b)
		{
		    System.out.println("Valid");
		}
		else
		{
		    throw new myExp();
		}
		}
		catch (myExp e)
		{
		    System.out.println(e);
		}
	}
}

