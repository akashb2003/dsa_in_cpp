class myt1 extends Thread
{
    public void run()
    {
        try 
        {
            for(int i=0;i<6;i++)
            {
                if((i%2) !=0)
                {
                    System.out.println(i);
                }
            }
        } catch(Exception e)
        {
        }
    }
}

class myt2 extends Thread
{
    int x;
    myt2(int x)
    {
        this.x = x;
    }
    
    public void run()
    {
        try 
        {
            int rem=0,ans=0;
            while(x!=0)
            {
                rem = x%10;
                ans = ans*10 + rem;
                x = x/10;
            }
            System.out.println(ans);
        } catch(Exception e)
        {
        }
    }
}

public class q16
{
	public static void main(String[] args) {
		myt1 t1 = new myt1();
		t1.start();
		myt2 t2 = new myt2(1234);
		t2.start();
	}
}

