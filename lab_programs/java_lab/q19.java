interface m1
{
    public int res(int x,int y);
}

public class q19
{
	public static void main(String[] args) {
	    m1 o1 = (x,y)->(x+y);
	     m1 o2 = (x,y)->(x*y);
	    System.out.println(o1.res(2,4));
	    System.out.println(o2.res(2,4));
	}
}

