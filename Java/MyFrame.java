import java.awt.*;
import java.awt.event.*;


public class MyFrame extends Frame implements ActionListener{
	
	Label l1,l2,l3;
	TextField tf1,tf2,tf3;
	Button b1,b2;
	
	MyFrame(String name){
		setTitle(name);
		setSize(800,480);
		setVisible(true);
		
		setLayout(new GridLayout(4,2,20,70));
		l1=new Label("NUM 1 :");
		l2=new Label("NUM 2 :");
		l3=new Label("ANS   :");
		tf1=new TextField();
		tf2=new TextField();
		tf3=new TextField();
		b1 = new Button("ADD");
		b2 = new Button("CLEAR");
		
		add(l1);
		add(tf1);
		add(l2);
		add(tf2);
		add(l3);
		add(tf3);
		add(b1);
		add(b2);
		
		b1.addActionListener(this);		
		b2.addActionListener(this);
	}
	
	public void actionPerformed(ActionEvent ae){
		Object o=ae.getSource();
		
		if(o instanceof Button){
			Button b3 = (Button)o;
			if(b3==b1){
				float n1,n2;
				if(tf1.getText()==null || tf2.getText()==null)
				{
					n1=0;
					n2=0;
				}
				else{
				n1=Float.parseFloat(tf1.getText());
				n2=Float.parseFloat(tf2.getText());
				}
				float n3=n1+n2;
				tf3.setText("" + n3);
			} 
			if(b3==b2){
				tf1.setText("");
				tf2.setText("");
				tf3.setText("");
				
			} 
		}
		
	}
	
	
	public static void main(String args[]){
		MyFrame f = new MyFrame("Addition Frame");
	}	
}
