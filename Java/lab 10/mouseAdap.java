/*
<applet code="mouse" height=720 width=1280>
</applet>
*/
import java.awt.*;
import java.applet.*;
import java.awt.event.*;

public class mouseAdap extends Applet
{
	int x,y;
	String msg;
	public void init()
	{
		addMouseListener(new MouseAdapter(){
		
	                                        public void mouseClicked(MouseEvent me)
	                                        {
		                                        x=me.getX();
		                                        y=me.getY();
		                                        msg="X="+x+"Y="+y;
		                                        repaint();
	                                        }
	                                        public void mouseMoved(MouseEvent me)
	                                        {
		                                        x=me.getX();
		                                        y=me.getY();
		
		                                        showStatus("X="+x+"Y="+y);
	                                        }
	                                        });
	}
	public void paint(Graphics g)
	{
		g.drawString(msg,20,50);
	}
}
