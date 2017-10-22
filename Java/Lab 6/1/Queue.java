/*Write a program to create a queue with two operations : Dequeue and Enqueue. Write custom exception classes UnderFlowException and OverFlowException to indicate underflow and overflow of queue respectively(override toString() method in both classes). Write dequeue and enqueue methods such that when underflow or overflow occur, it will throw appropriate custom exception.
Write a DemoCustomException class which contain main method to handle CustomException (i.e. UnderFlowException and OverFlowException)*/
import java.util.*;
class Queue
{
	int q[];
	int f=-1,r=-1,size;
	Queue()
	{
		q=new int[10];
		size=10;
	}
	Queue(int size)
	{
		q=new int[size];
		this.size=size;
	}
	void enQueue(int x) throws OverflowException
	{
		if(r >= (size-1))
		{
			OverflowException e=new OverflowException(++r);
			throw e;
		}
		r++;
		q[r]=x;
		if(f==-1)
			f++;
	}
	int deQueue() throws UnderflowException
	{
		if(f==-1)
		{
			UnderflowException e=new UnderflowException();
			throw e;
		}
		int y=q[f];
		if(f==r)
		{
			f=r=-1;
		}
		else
		{
			f++;
		}
		return y;
	}
	void display()
	{
		for(int i=f;i<=r;i++)
			System.out.println(q[i]);
	}
}
class OverflowException extends Exception
{
	int in;
	OverflowException(int in)
	{
		this.in=in;
	}
	public String toString()
	{
		return("Queue Overflow r="+in);
	}
}
class UnderflowException extends Exception
{
	public String toString()
	{
		return("Queue Underflow");
	}
}
class Demo
{
	public static void main(String args[])
	{
		int size,ch=0;
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter Size of Queue");
		size=sc.nextInt();
		Queue q=new Queue(size);
		while(ch!=-999)
		{
			System.out.println("Enter \n1.EnQueue\n2.DeQueue\n3.Print\nEnter -999 to Exit");
			ch=sc.nextInt();
			try
			{
				switch(ch)
				{
					case 1:System.out.println("Enter Your element");
						int x=sc.nextInt();
						q.enQueue(x);
						break;
					case 2:int y=q.deQueue();
						System.out.println(y+"is deleted");
						break;
					case 3:q.display();
						break;
					default:System.out.println("Enter valid Input");
						break;
				}
			}
			catch(OverflowException e)
			{
				System.out.println(e);
			}
			catch(UnderflowException e)
			{
			System.out.println(e);
			}
		}
	}
}
