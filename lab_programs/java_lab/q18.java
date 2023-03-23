class myt1
{
    synchronized void displayTable(int num)
    {
        try {
            for(int i=1;i<11;i++)
            {
                System.out.println(i*num);
                Thread.sleep(1000);
            }
        } catch(Exception e) {
        }
    }
}

class myt2 extends Thread
{
    myt1 t1; 
    int n;
    myt2(myt1 t1,int n)
    {
        this.n = n;
        this.t1 = t1;
    }
    
    public  void run()
    {
        t1.displayTable(n);
    }
}

public class q18
{
	public static void main(String[] args) {
		myt1 a = new myt1();
		myt2 t11 = new myt2(a,8);
		myt2 t12 = new myt2(a,9);
		t11.start(); t12.start();
	}
}

