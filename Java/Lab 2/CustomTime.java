import java.util.*;
class CustomTime
{
	private int h,m,s;
	CustomTime()
	{
		h=0;m=0;s=0;
	}
	
	CustomTime(int h,int m,int s)
	{
		this.h=h;
		this.m=m;
		this.s=s;
	}
	
	CustomTime(int s)
	{
		h=s/3600;
		m=(s%3600)/60;
		this.s=((s%3600)%60);
	}
	void setHour(int h)
	{
		this.h=h;
	}
	
	void setMin(int m)
	{
		this.m=m;
	}
	
	void setSec(int s)
	{
		this.s=s;
	}
	
	int getHour()
	{
		return h;
	}
	int getMin()
	{
		return m;
	}
	int getSec()
	{
		return s;
	}
	
	public String toString()
	{
		return(h + ":" + m + ":" + s);
	}
	
}
class DemoCustomTime
{
	public static void main(String args[])
	{
		Scanner sc=new Scanner(System.in);
		
		System.out.print("\t Enter Hour = ");
		int hour=sc.nextInt();
		System.out.print("\t Enter Minute = ");
		int min = sc.nextInt();
		System.out.print("\t Enter Seconds = ");
		int sec = sc.nextInt();
		System.out.print("\t Enter Only Seconds = ");
		int onlysec = sc.nextInt();
		
		
		CustomTime obj1 = new CustomTime();
		CustomTime obj2 = new CustomTime(hour,min,sec);
		CustomTime obj3 = new CustomTime(onlysec);		
		
		System.out.println(obj1);
		System.out.println(obj2);
		System.out.println(obj3);
		
		obj2.setHour(8);
		hour=obj2.getHour();
		System.out.println(hour);
	}
}
