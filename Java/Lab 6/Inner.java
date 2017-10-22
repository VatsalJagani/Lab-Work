class Outer
{
	void display()
	{
		System.out.println("Outer class");
	}
	class Inner
	{
		void show()
		{
			System.out.println("Inner class");
		}
	}

}
class TestOuter
{
	public static void main(String[] args)
	{
		Outer o=new Outer();
		Outer.Inner i= o.new Inner();
		o.display();
		i.show();		
	}
}

