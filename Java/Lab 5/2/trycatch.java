class trycatch
{
	public static void main(String args[])
	{
		try
		{
			int a=42,b=0,c;
			c=a/b;
			System.out.println("This is not printed");
		}
		catch(ArithmeticException e)
		{
			System.out.println("Divide by zero:" + e);
		}
		System.out.println("This is printed");
		
	}
}
