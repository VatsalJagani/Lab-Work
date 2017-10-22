import java.awt.*;
import java.applet.*;
class Line extends Frame
{
	static int x1,x2,y1,y2;
    Line(String t)
	{
		super(t);
		x1=10;x2=100;y1=10;y2=100;

		setSize(300,300);
		setVisible(true);
	}
	public void paint(Graphics g)
	{
		g.drawLine(x1,y1,x2,y2);
	}
	public static void main(String args[])
	{
		Line l1=new Line("First Frame");
		l1.x1=10;l1.x2=10;l1.y1=10;l1.y2=100;
		try
		{
			Thread.sleep(10000);
		}
		catch(Exception e)
		{
			System.out.println(e);
		}
		l1.repaint();
	}

}