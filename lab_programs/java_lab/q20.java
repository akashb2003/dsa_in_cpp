public class q20
{
	public static void main(String[] args) {
		int c=0;
		String s = "abbc";
		s = s.toUpperCase();
		char ch = s.charAt(0);
		for(int i=1;i<s.length();i++)
		{
		    if(s.charAt(i)==ch)
		    c++;
		    ch = s.charAt(i);
		}
		System.out.println(s);
		System.out.println(c);
	}
}

