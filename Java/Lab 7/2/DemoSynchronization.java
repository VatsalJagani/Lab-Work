class Show
{
	synchronized void display()
	{
		try
		{
			System.out.print("["+Thread.currentThread().getName()+" with " + Thread.currentThread().getPriority());
			Thread.sleep(1000);
			System.out.println("]");
		}
		catch(InterruptedException e)
		{
			System.out.println("InteruptedException");
		}
	}
}
class Thread1 extends Thread
{
	Show s;
	Thread1(Show s,String nm,int pri)
	{
		super(nm);
		this.s=s;
		setPriority(pri);
		start();
	}
	public void run()
	{
		s.display();
	}
	
}
class DemoSynchronization
{
	public static void main(String args[])
	{
		Show sh=new Show();
		Thread1 t1=new Thread1(sh,"first",4);
		Thread1 t2=new Thread1(sh,"first",1);
		Thread1 t3=new Thread1(sh,"first",7);
		Thread1 t4=new Thread1(sh,"first",10);
	}
}
