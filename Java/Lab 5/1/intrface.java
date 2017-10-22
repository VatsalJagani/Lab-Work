import java.util.*;
interface Relational
{
	boolean isGreater(Line l);
	boolean isLess(Line l);
	boolean isEqual(Line l);
}
class Line implements Relational
{
	double x1,x2,y1,y2;
	Line()
	{
		x1=0;
		x2=0;
		y1=0;
		y2=0;
	}
	Line(double x1,double y1,double x2,double y2)
	{
		this.x1=x1;
		this.y1=y1;
		this.x2=x2;
		this.y2=y2;
	}
	double getLength()
	{
		double length=Math.sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
		return(length);
	}
	public boolean isGreater(Line l)
	{
		double len1=this.getLength();
		double len2=l.getLength();
		if(len2 < len1)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	public boolean isLess(Line l)
	{
		double len1=this.getLength();
		double len2=l.getLength();
		if(len2 > len1)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	public boolean isEqual(Line l)
	{
		double len1=this.getLength();
		double len2=l.getLength();
		if(len2 == len1)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	
}
class CompareLines
{
	public static void main(String args[])
	{
		double x1,x2,x3,x4,y1,y2,y3,y4;
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter first point of line 1:");
		x1=sc.nextDouble();
		y1=sc.nextDouble();
		System.out.println("Enter second point of line 1:");
		x2=sc.nextDouble();
		y2=sc.nextDouble();
		Line l1=new Line(x1,y1,x2,y2);
		System.out.println("Enter first point of line 2:");
		x3=sc.nextDouble();
		y3=sc.nextDouble();
		System.out.println("Enter first point of line 2:");
		x4=sc.nextDouble();
		y4=sc.nextDouble();
		Line l2=new Line(x3,y3,x4,y4);
		if(l1.isGreater(l2))
		{
			System.out.println("Line 1 is Greater than 2");
		}
		else if(l1.isLess(l2))
		{
			System.out.println("Line 1 is Less than 2");
		}
		else if(l1.isEqual(l2))
		{
			System.out.println("Both are Equal");
		}
	}
}
