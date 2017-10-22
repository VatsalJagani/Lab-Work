/*Write a program which describes concept of serialization, deserialization on Employee class. Employee has name, salary and emplyee id attributes.Serialize employees and deserialize them.*/

import java.io.*;
import java.util.*;
class Employee implements Serializable{
	int id;
	String name;
	float sal;
	public Employee(int i,float salary,String s){
		id = i;
		sal = salary;
		name = s;
	}

	public String toString(){
		return(id +" "+ name +" " +sal);
	}
}

class Serial{
	public static void main(String args[]){
		try{
			Employee e1 = new Employee(1,5000,"Nirav");
			Employee e2 = new Employee(1,50000,"Jasani");
			Employee e3 = new Employee(1,500000,"KT");

			FileOutputStream fos = new FileOutputStream("employee.txt");
			ObjectOutputStream oos = new ObjectOutputStream(fos);

			oos.writeObject(e1);
			oos.writeObject(e2);
			oos.writeObject(e3);
			oos.flush();
			oos.close();
		}
		catch(IOException e) {
			System.out.println("Exception during serialization: " + e);
		}


		try {
			Employee e4;
			Employee e5;
			Employee e6;
			FileInputStream fis = new FileInputStream("employee.txt");
			ObjectInputStream ois = new ObjectInputStream(fis);
			e4 = (Employee)ois.readObject();
			e5 = (Employee)ois.readObject();
			e6 = (Employee)ois.readObject();
			ois.close();
			System.out.println("Employee 4 = " + e4);
			System.out.println("Employee 5 = " + e5);
			System.out.println("Employee 6 = " + e6);
		}
		catch(Exception e) {
			System.out.println("Exception during deserialization: " + e);
			System.exit(0);
		}
	}
}


