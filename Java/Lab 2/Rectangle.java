import java.util.*;
class Rectangle
{
	int l,w;
	Rectangle()
	{
		l=0;
		w=0;
	}
	
	
	int findArea(int l,int w)
	{
		return(l * w);
	}
}

class DemoRect
{
	public static void main(String args[])
	{
		Scanner sc = new Scanner(System.in);
		System.out.print("\n\tEnter length = ");
		int len=sc.nextInt();
		System.out.print("\tEnter width  = ");
		int wid=sc.nextInt();
		Rectangle rec=new Rectangle();
		int area=rec.findArea(len,wid);
		System.out.println("\tArea is      = " + area);
	}
}
