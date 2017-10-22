/*<html>
<applet code="banner" width=1350 height=800>

</applet>
</html>*/
import java.applet.*;
import java.awt.*;

public class banner extends Applet implements Runnable
{
	String s;
	Thread t=null;
	boolean flag;
	
	public void init()
	{
		setBackground(Color.green);
		setForeground(Color.blue);
	}
	public void start()
	{
		s="      Wel-come in to My Applet    ";
		t=new Thread(this);
		flag=false;
		t.start();
	}
	public void paint(Graphics g)
	{
		g.drawString(s,450,300);
	}
	public void run()
	{
		char ch;
		while(true)
		{
			try
			{
				repaint();
				t.sleep(100);
				ch=s.charAt(0);
				s=s.substring(1,s.length());
				s+=ch;
				if(flag)
					break;
			}
			catch(Exception e)
			{
				System.out.println(e);
			}
		}
	}
	public void stop()
	{
		flag=true;
		t=null;
	}
}
