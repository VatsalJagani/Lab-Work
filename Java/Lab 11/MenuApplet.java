import java.awt.*;
import java.awt.event.*;
import java.util.*;
import java.applet.*;
/*
<applet code = "MenuApplet" width=500 height=500>
</applet>
*/


class DemoMenu extends Frame implements ActionListener{
	
	Label l1,l2;
	TextField tf1,tf2;
	MenuBar mb;
	Menu arith;
	MenuItem a,b,c,d,e;
	MenuApplet ma;
	
	DemoMenu(String name,MenuApplet ma){
		setTitle(name);
		setSize(800,480);
		setVisible(true);
		this.ma= ma;
		mb=new MenuBar();
		this.setMenuBar(mb);
		arith = new Menu("Arithmatic");
		a=new MenuItem("Sum");
		b=new MenuItem("Sub");
		c=new MenuItem("Mul");
		d=new MenuItem("Div");
		e=new MenuItem("Mod");
		setLayout(new GridLayout(2,2,20,70));
		
		l1=new Label("NUM 1 :");
		l2=new Label("NUM 2 :");
		tf1=new TextField();
		tf2=new TextField();
		arith.add(a);
		arith.add(b);
		arith.add(c);
		arith.add(d);
		arith.add(e);
		mb.add(arith);
		add(l1);
		add(tf1);
		add(l2);
		add(tf2);
		
		a.addActionListener(this);		
		b.addActionListener(this);
		c.addActionListener(this);		
		d.addActionListener(this);		
		e.addActionListener(this);		
	}
	
	public void actionPerformed(ActionEvent ae){
		double d1,d2,d3;
		String s;
		MenuItem mi = (MenuItem)ae.getSource();
		if(mi == a){
			d1 = Double.parseDouble(tf1.getText());
			d2 = Double.parseDouble(tf2.getText());
			d3 = d1+d2;
			s = "" + d3 ;  
			ma.ta.setText(s);
		}	
		if(mi == b){
			d1 = Double.parseDouble(tf1.getText());
			d2 = Double.parseDouble(tf2.getText());
			d3 = d1-d2;
			s = "" + d3 ;  
			ma.ta.setText(s);
		}	
		if(mi == c){
			d1 = Double.parseDouble(tf1.getText());
			d2 = Double.parseDouble(tf2.getText());
			d3 = d1*d2;
			s = "" + d3 ;  
			ma.ta.setText(s);
		}	
		if(mi == d){
			d1 = Double.parseDouble(tf1.getText());
			d2 = Double.parseDouble(tf2.getText());
			d3 = d1/d2;
			s = "" + d3 ;  
			ma.ta.setText(s);
		}	
		if(mi == e){
			d1 = Double.parseDouble(tf1.getText());
			d2 = Double.parseDouble(tf2.getText());
			d3 = d1%d2;
			s = "" + d3 ;  
			ma.ta.setText(s);
		}	
						
}
}
public class MenuApplet extends Applet
{
	TextArea ta;
	public void init(){
		ta = new TextArea(30,30);
		add(ta);
		DemoMenu dm = new DemoMenu("Exc 1",this);
	}
}
