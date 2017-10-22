class Parent
{
}
class Child extends Parent
{

}
class Instance
{
	void method1(Parent k)
	{
		if(k instanceof Parent)
			System.out.println("k is instance of parent");
		if(k instanceof Child)
			System.out.println("k is instance of child");
	}
	void method2(Child k)
	{
		if(k instanceof Parent)
			System.out.println("k is instance of parent");
		if(k instanceof Child)
			System.out.println("k is instance of child");
	}
}
class Demo
{
	public static void main(String args[])
	{
		Parent p = new Parent();
		Child c = new Child();
		Instance i = new Instance();
		i.method1(p);
	}
}
