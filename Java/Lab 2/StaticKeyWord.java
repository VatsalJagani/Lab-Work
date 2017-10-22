class StaticKeyWord
{
	static int x;
	int y;
	static void increment()
	{
		x++;
		//y++;
	}
	public static void main(String args[])
	{
		StaticKeyWord obj=new StaticKeyWord();
		obj.increment();
		StaticKeyWord.increment();
		System.out.println(x);
		System.out.println(obj.y);
	}
}
