/*1
Write a Java program as per the following description, to demonstrate the concept of thread priority.
 MyThread class :
 Create a class MyThread which extends Thread class.
 It’s run method prints number 1 to 5 with that thread name and priority.
 MyThreadDemo class :
 Create a class MyThreadDemo.
 In the main method create two objects of MyThread class.
 Set priority of first thread object to MIN value and second thread object to MAX value.
 Start both the threads.
 Print numbers 1 to 50 in main method with that thread name and its priority.*/

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
		for(int i=1;i<=100;i++)
		{
			System.out.println("Thread = "+ Thread.currentThread().getName() + " Priority = " + Thread.currentThread().getPriority() + " ::: "+ i );
			try{
				Thread.sleep(10);
			}
			catch(InterruptedException e)
			{
				System.out.println("Inturrepted");
			}
		}
	} 
}


class MyThreadDemo{
	public static void main(String args[] ){
		MyThread t1=new MyThread ("Thread1",1); 
		MyThread t2=new MyThread ("Thread2",10); 
		
		for(int i=1;i<51;i++){
			System.out.println("Thread = "+ Thread.currentThread().getName() + " Priority = " + Thread.currentThread().getPriority() + " ::: "+ i );
			try{
				Thread.sleep(1000);
			}
			catch(InterruptedException e)
			{
				System.out.println("Inturrepted");
			}
		}

	}
}























