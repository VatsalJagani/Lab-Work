class Show
{
	synchronized void display()
	{	
		try{
			System.out.print("[" + Thread.currentThread().getName() + "   " + Thread.currentThread().getPriority() );
			Thread.sleep(1000);
			System.out.println("]");
		}
		catch(InterruptedException e)
		{
			System.out.println("Interrupted");
		}
	}
}

class Thread1 extends Thread {
	Show s;
	Thread1(Show s,String nm,int pri)
	{
		super (nm);
		this.s=s;
		setPriority(pri);
		start();
	}
	public void run()
	{
	s.display();
	}
}

class DemoSync
{
	public static void main(String args[])
	{
		Show sh=new Show();
		Thread1 t1 = new Thread1(sh,"1st",4);
		Thread1 t2 = new Thread1(sh,"2nd",10);
		Thread1 t3 = new Thread1(sh,"3rd",7);
		Thread1 t4 = new Thread1(sh,"4th",1);
	}
}
