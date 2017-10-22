/* A Simple Applet-Based Calculator Application By RJ */
/* Created 22/09/2015 ; 15:06(IST) */

import java.awt.*;
import java.applet.*;
import java.awt.event.*;
/*<applet code = "CalciApp" height=720 width=1280></applet>*/

public class CalciApp extends Applet{
TextField tf1,tf2,tf3;
Label l1,l2,l3;
Button b1,b2,b3,b4,b5;
public void init(){
	setLayout(new GridLayout(6,2,50,50));
	tf1 = new TextField(10);
	tf2 = new TextField(10);
	tf3 = new TextField(10);
	l1 = new Label("No. 1 : ");
	l2 = new Label("No. 2 : ");
	l3 = new Label("Answer : ");
	b1 = new Button("Add");
	b2 = new Button("Subtract");
	b3 = new Button("Multiply");
	b4 = new Button("Divide");
	b5 = new Button("Clear");
	add(l1);add(tf1);
	add(l2);add(tf2);
	add(l3);add(tf3);
	add(b1);add(b2);
	add(b3);add(b4);
	add(b5);
	b1.addActionListener(new Adder(this));
	b2.addActionListener(new Subt(this));
	b3.addActionListener(new Mul(this));
	b4.addActionListener(new Div(this));
	b5.addActionListener(new Clearer(this));
	}
}

class Adder implements ActionListener{
CalciApp ca1;
public Adder(CalciApp ca1){
	this.ca1 = ca1;
	}
public void actionPerformed(ActionEvent ae1){
	try{
		String s1 = ca1.tf1.getText();
		String s2 = ca1.tf2.getText();
		double a = Double.parseDouble(s1);
		double b = Double.parseDouble(s2);
		double c = a+b;
		String s3 = Double.toString(c);
		ca1.tf3.setText(s3);
		}
		catch(NumberFormatException e)
			{ca1.tf1.setText("Enter A Number !");
			 ca1.tf2.setText("Enter A Number !");
				}
	}
}

class Subt implements ActionListener{
CalciApp ca2;
public Subt(CalciApp ca2){
	this.ca2 = ca2;
	}
public void actionPerformed(ActionEvent ae1){
	try{
		String s1 = ca2.tf1.getText();
		String s2 = ca2.tf2.getText();
		double a = Double.parseDouble(s1);
		double b = Double.parseDouble(s2);
		double c = a-b;
		String s3 = Double.toString(c);
		ca2.tf3.setText(s3);
		}
		catch(NumberFormatException e)
			{ca2.tf1.setText("Enter A Number !");
			 ca2.tf2.setText("Enter A Number !");
				}
	}
}

class Mul implements ActionListener{
CalciApp ca3;
public Mul(CalciApp ca3){
	this.ca3 = ca3;
	}
public void actionPerformed(ActionEvent ae1){
	try{
		String s1 = ca3.tf1.getText();
		String s2 = ca3.tf2.getText();
		double a = Double.parseDouble(s1);
		double b = Double.parseDouble(s2);
		double c = a*b;
		String s3 = Double.toString(c);
		ca3.tf3.setText(s3);
		}
		catch(NumberFormatException e)
			{ca3.tf1.setText("Enter A Number !");
			 ca3.tf2.setText("Enter A Number !");
				}
	}
}

class Div implements ActionListener{
CalciApp ca4;
public Div(CalciApp ca4){
	this.ca4 = ca4;
	}
public void actionPerformed(ActionEvent ae1){
	try{
		String s1 = ca4.tf1.getText();
		String s2 = ca4.tf2.getText();
		double a = Double.parseDouble(s1);
		double b = Double.parseDouble(s2);
		double c = a/b;
		String s3 = Double.toString(c);
		ca4.tf3.setText(s3);
		}
		catch(NumberFormatException e)
			{ca4.tf1.setText("Enter A Number !");
			 ca4.tf2.setText("Enter A Number !");
				}
	}
}

class Clearer implements ActionListener{
CalciApp ca5;
public Clearer(CalciApp ca5){
	this.ca5 = ca5;
	}
public void actionPerformed(ActionEvent ae1){
	ca5.tf1.setText("");
	ca5.tf2.setText("");
	ca5.tf3.setText("");
	}
}

