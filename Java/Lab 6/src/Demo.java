/*Consider Workdir and Sourcedir are the directories on the desktop. Consider A.java, B.java, C.java, D.java and Demo.java file written inside Sourcedir. Corresponding class files are in packages pack1, pack2, pack1.p, pack3 and pack4 under the workdir. The classes A,B,C,D have constructors and dispA, dispB, dispC, dispD methods respectively which prints necessary details. Demo class uses the other classes, call constructors and methods of other classes. Write a program to do so. Specify import statements at necessary places also set classpath whenever required.*/
package pack4;

import pack1.A;
import pack2.B;
import pack1.p.C;
import pack3.D;

public class Demo
{
	public static void main(String args[])
	{
			A a=new A();
			B b=new B();
			C c=new C();	
			D d=new D();
			
			a.dispA();
			b.dispB();
			c.dispC();
			d.dispD();
	}
}
