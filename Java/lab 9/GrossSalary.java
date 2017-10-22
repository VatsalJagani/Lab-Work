import java.awt.*;
import java.applet.*;

/*
<applet code="GrossSalary" width=800 height=480>
<param name="Emp name" value="RMJ"/>
<param name="salary" value="10000"/>
</applet>
*/

public class GrossSalary extends Applet{
	String s1,s2;
	float sal;
	public void init(){
		s1=getParameter("Emp name");
		s2=getParameter("salary");
		sal = Float.parseFloat(s2);
		sal=salary(sal);
		s2="";
		s2+=sal;
	}
	public void paint(Graphics g){
		g.drawString(s1,350,260);
		g.drawString(s2,380,260);
	}
	float salary(float s){
		if(s<10000){
			s+=015*s;
		}
		else{
			s+=0.1*s;
		}
		return s;
	}
}
