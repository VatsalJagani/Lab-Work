class MyThread extends Thread
{

	MyThread(String name,int pri)
	{
		super(name);
		setPriority(pri);
		start();
	}
	public void run()
	{
		for(int i=1;i<=5;i++)
		{
			System.out.println("Thread= "+Thread.currentThread().getName()+" : Priority= "+getPriority()+" : "+i);
			try
			{
				Thread.sleep(1000);
			}
			catch(InterruptedException e)
			{
				System.out.println("InterruptException");
			}
			
		}
	}
}
class MyThreadDemo
{
	public static void main(String args[])
	{
		MyThread t1=new MyThread("Thread1",Thread.MIN_PRIORITY);
		MyThread t2=new MyThread("Thread2",Thread.MAX_PRIORITY);
		
		for(int j=1;j<=50;j++)
		{
			System.out.println("Thread="+Thread.currentThread().getName()+":Priority="+Thread.currentThread().getPriority()+":"+j);
		}
	}
}
