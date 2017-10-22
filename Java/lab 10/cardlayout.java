/*
<applet code="cardlayout" height=700 width=700>
</applet>
*/

import java.awt.*;
import java.applet.*;
import java.awt.event.*;
public class cardlayout extends Frame implements ActionListener
{       
        static cardlayout c1;
	CardLayout c;
	Button f,l,n,p;
	Label l1,l2,l3,l4,l5;
	Panel p1,p2;
	cardlayout()
	{
		
		setName("CardLayout");
		setSize(500,500);
		setVisible(true);
		setLayout(new BorderLayout());
		p1=new Panel();
		p2=new Panel();
		c=new CardLayout();
		p1.setLayout(c);
	
		l1=new Label("first");
		l2=new Label("Second");
		l3=new Label("Third");
		l4=new Label("Forth");
		l5=new Label("Fifth");
		p1.add("card1",l1);
		p1.add("card2",l2);
		p1.add("card3",l3);
		p1.add("card4",l4);
		p1.add("card5",l5);
		add(p1,BorderLayout.CENTER);
		
		f=new Button("First");
		p=new Button("Prev");
		n=new Button("Next");
		l=new Button("Last");
		
		p2.setLayout(new FlowLayout());
		p2.add(f);
		p2.add(p);
		p2.add(n);
		p2.add(l);
		add(p2,BorderLayout.SOUTH);
		f.addActionListener(this);
	        p.addActionListener(this);
	        n.addActionListener(this);
	      	l.addActionListener(this);
	}
	public void actionPerformed(ActionEvent ae)
	{
	        Button b=(Button)ae.getSource();
	        if(b==f)
	        {
	                c1.c.first(p1);
	        }
	        if(b==p)
	        {
	                c1.c.previous(p1);
	        }
	        if(b==n)
	        {
	                c1.c.next(p1);
	        }
	        if(b==l)
	        {
	                c.last(p1);
	        }
	}
	public static void main(String args[])
	{
			c1=new cardlayout();
	}
}
