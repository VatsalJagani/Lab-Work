import java.util.*;
class Account
{
	double balance;
	Account()
	{	
		balance=0;		
	}
	
	Account(double bal)
	{	
		balance=bal;		
	}	

	void deposite(double dep)
	{
		balance +=dep;
	}
	
	void withdraw(double value)
	{
		this.balance -= value;
	}

	void transfer(double amount,Account act)
	{
		this.withdraw(amount);
		act.deposite(amount);
	}
	
	void dispBal()
	{
		System.out.println(this.balance);
	} 
}

class Saving extends Account
{	
	double ir;
	Saving()
	{
		ir=0.8;
	}

	Saving(double irate,double bal)
	{
		super(bal);
		ir = irate;
	}
	void calInt()
	{
		double Int = (balance*ir)/(100);
		balance+=Int;
	}	
}

class Checking extends Account
{
	int trcount;
	double fees;
	Checking()
	{	
		super();
		trcount = 0;
		fees = 2.00;
		
	}
	
	Checking(double bal,double fee)
	{	
		super(bal);
		fees = fee; 
	}

	void withdraw(double value)
	{
		trcount++;
		super.withdraw(value);
	}

	void deposite(double amount)
	{
		trcount++;
		super.deposite(amount);
	}
	void deductFees()
	{
		if(trcount>3)
		{
		balance-=((trcount-3)*fees);
		}	
	}
	
}

class Naive
{
	public static void main(String args[])
	{
		Saving mom=new Saving(0.5,0);
		Checking harry=new Checking(100,2);
	 	mom.deposite(10000);
		mom.transfer(2000,harry);
		harry.withdraw(1500);
		harry.withdraw(80);
		mom.transfer(1000,harry);
		harry.withdraw(400);
		mom.calInt();
		harry.deductFees();
		mom.dispBal();		
		harry.dispBal();		
	}
}
