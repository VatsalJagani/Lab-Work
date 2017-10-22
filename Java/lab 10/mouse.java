/*
<applet code="mouse" height=720 width=1280>
</applet>
*/
import java.awt.*;
import java.applet.*;
import java.awt.event.*;

public class mouse extends Applet implements MouseListener,MouseMotionListener
{
	int x,y;
	String msg;
	public void init()
	{
		addMouseListener(this);
		addMouseMotionListener(this);
	}
	public void mouseClicked(MouseEvent me)
	{
		x=me.getX();
		y=me.getY();
		msg="X="+x+"Y="+y;
		repaint();
	}
	public void paint(Graphics g)
	{
		g.drawString(msg,20,50);
	}
	public void mouseMoved(MouseEvent me)
	{
		x=me.getX();
		y=me.getY();
		
		showStatus("X="+x+"Y="+y);
	}
	public void mouseExited(MouseEvent me)
	{
		
	}
	public void mouseEntered(MouseEvent me)
	{
		
	}
	public void mouseReleased(MouseEvent me)
	{
		
	}
	public void mousePressed(MouseEvent me)
	{
		
	}
	public void mouseDragged(MouseEvent me)
	{
		
	}
	public static void main(String args[])
	{
			mouse mb=new mouse();
	}
}
