import java.awt.*;
import java.util.*;
import java.awt.event.*;

class DemoCan extends Frame implements ItemListener
{
	Checkbox c1,c2,c3;
	Panel p;
	CheckboxGroup cg;
	Choice c;
	MyCanvas cs;
	//Graphics g;
	Panel p1;
	DemoCan()
	{
		super("DemoCan");
		setSize(500,500);
		setVisible(true);
		cg = new CheckboxGroup();
		p=new Panel();
		p1=new Panel();
		c1 = new Checkbox("Red",true,cg);
		c2 = new Checkbox("Green",false,cg);
		c3 = new Checkbox("Blue",false,cg);
		c = new Choice();
		c.add("Yellow");
		c.add("Cyan");
		c.add("Pink");
		c.add("Gray");
		setLayout(new BorderLayout());
		p.add(c1);
		p.add(c2);
		p.add(c3);
		p.add(c);
		add(p,BorderLayout.SOUTH);
		
		p1.setSize(410,410);
		cs = new MyCanvas();
		cs.setSize(400,400);
	//	cs.setVisible(true);
		cs.setBackground(Color.red);
		cs.setForeground(Color.yellow);
	//	cs.repaint();
		p1.add(cs);
		add(p1,BorderLayout.CENTER);
		c1.addItemListener(this);		
		c2.addItemListener(this);
		c3.addItemListener(this);
		c.addItemListener(this);
	}
	public void itemStateChanged(ItemEvent ie)
	{
		Object o = ie.getItemSelectable();
		if(o instanceof Checkbox)
		{
			if(o == c1)
			{
				cs.setBackground(Color.red);
				c1.setBackground(Color.red);
				c1.setBackground(Color.red);
				c1.setBackground(Color.red);
			}
			if(o == c2)
			{
				cs.setBackground(Color.green);
				c2.setBackground(Color.green);
			}
			if(o == c3)
			{
				cs.setBackground(Color.blue);
				c3.setBackground(Color.blue);
			}
		}
		if(o instanceof Choice)
		{
			Choice ce = (Choice)o;
			int i = ce.getSelectedIndex();
			if(i == 0)
			{
				cs.setForeground(Color.yellow);
				c.setBackground(Color.yellow);
			}
			if(i == 1)
			{
				cs.setForeground(Color.cyan);
				c.setBackground(Color.cyan);
			}
			if(i == 2)
			{
				cs.setForeground(Color.pink);
				c.setBackground(Color.pink);
			}
			if(i == 3)
			{
				cs.setForeground(Color.gray);
				c.setBackground(Color.gray);
			}
			cs.repaint();
		}
	}
	class MyCanvas extends Canvas
	{
		public void paint(Graphics g)
		{
			g.fillOval(50,80,300,240);
		}
	}
	public static void main(String args[])
	{
		new DemoCan();
		
	}
}
