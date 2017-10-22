import java.util.*;
import java.io.*;
class MyFile
{
	public static void main(String args[])
	{
	try
	{
		FileOutputStream fis=new FileOutputStream("f1.txt");
		
		byte dat=1;
		int i=0;
		while(i<3100)
		{
			fis.write(dat++);
			i++;
		}
	}
	catch(Exception e)
	{
		System.out.println(e);
	}
	}
}
	
