/*<html>
<head>
</head>
<applet code="JavaApplication5" width=200 height=200>
</applet>
</html>*/
import java.awt.*;
import java.applet.*;
public class JavaApplication5 extends Applet
{
        String s;

        public JavaApplication5()
        {
			try
			{
				this.s = "Hi";
			}
			catch(Exception e)
			{
				System.out.println(e);
			}
        }
        public void init()
        {
			try
			{
				s+="init() called";
			}
			catch(Exception e)
			{
				System.out.println(e);
			}

        }
        public void start()
        {
			try
			{
				s+="start() called";
			}
			catch(Exception e)
			{
				System.out.println(e);
			}

        }


        public void paint(Graphics g)
        {
			try
			{
				g.drawString(s,10,50);
			}
			catch(Exception e)
			{
				System.out.println(e);
			}

        }
        public void stop()
        {
			try
			{
				s+="stop() called";
			}
			catch(Exception e)
			{
				System.out.println(e);
			}

        }
}
