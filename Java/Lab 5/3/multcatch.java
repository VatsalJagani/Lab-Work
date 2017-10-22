import java.util.*;
class multcatch
{
	public static void main(String args[])
	{
		try
		{
			int a;
			a=args.length;
			int b=42;
			int c[]=new int[5];
			a=b/a;
			c[5]=26;
			System.out.println("This is not printed");
		}
		
		catch(ArithmeticException e)
		{
			System.out.println("Divide by zero:" + e);
		}
		catch(ArrayIndexOutOfBoundsException e)
		{
			System.out.println("Array Bounds:" + e);
		}
		catch(Exception e)
		{
			System.out.println("Common Exception:" + e);    //Without Error write note
		}
		System.out.println("This is printed");
		
	}
}
