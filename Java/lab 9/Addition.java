
import java.awt.*;
import java.awt.event.*;

public class Addition extends Frame implements ActionListener
{
        Label l1,l2,ans;
        TextField tf1,tf2,tans;
        Button b1,b2;
        Panel p,p1;
        Addition()
        {
                setTitle("Addition");
                setSize(300,200);
                setVisible(true);
                l1=new Label("num1");
                l2=new Label("num2");
                ans=new Label("Sum");
                tf1=new TextField(5);
                tf2=new TextField(5);
                tans=new TextField(5);
                b1=new Button("ADD");
                b2=new Button("Clear");
                setLayout(new BorderLayout());
                p=new Panel();
                p.setLayout(new GridLayout(3,2));
                p.add(l1);
                p.add(tf1);
                p.add(l2);
                p.add(tf2);
                p.add(ans);
                p.add(tans);
                add(p,BorderLayout.CENTER);
                
                
                p1=new Panel();
                p1.setLayout(new GridLayout(1,2));
                
                p1.add(b1);
                p1.add(b2);
                add(p1,BorderLayout.SOUTH);
                
                b1.addActionListener(this);
                b2.addActionListener(this);
        }       
        public void actionPerformed(ActionEvent ae)
        {
                String s1,s2;
                //Button b=(Button)ae.getSource();
                if(ae.getSource()==b1)
                {
                        s1=tf1.getText();
                        s2=tf2.getText();
                        if(s1=="")
                        {
                                s1="0";
                        }
                        if(s2=="")
                        {
                                s2="0";
                        }
                        // put addition and print
                        double x=Double.parseDouble(s1);
                        double y=Double.parseDouble(s2);
                        double z=x+y;
                       // System.out.println(x+" "+y+" "+z);
                        tans.setText(z+" "); 
                }
                if(ae.getSource()==b2)
                {
                        //clear both text field
                        tf1.setText("");
                        tf2.setText("");
                        tans.setText("");
                }
        }
        
        public static void main(String args[])
        {
                Addition a=new Addition();
        }
}

