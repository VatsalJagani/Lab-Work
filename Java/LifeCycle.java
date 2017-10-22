import java.awt.*;
import java.applet.*;
/*
<html>
<head>
<applet code="LifeCycle" width=300 height=300 >
</applet>
</head>
</html>
*/

public class LifeCycle extends Applet{
	String s = "Life Cycle -->";
	public void init(){
		s += "Init called -->";
	} 
	public void start(){
		s += "Start called-->";
	}
	public void paint(Graphics g){
		g.drawString(s,10,10);
	}
	public void stop(){
		s += "Stop called-->";
		repaint();
	}
}
