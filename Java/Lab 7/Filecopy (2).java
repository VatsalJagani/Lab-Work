import java.io.*;
class copy
{
	public static void main(String args[])
	{
		int i;
		FileReader fr=null;
		FileWriter fw=null;
		try
		{
			fr=new FileReader(args[0]);
			fw=new FileWriter(args[1]);
			while((i=fr.read()) != -1)
			{
				fw.write((char)i);
				
			}
		}
		catch(Exception e)
		{
			System.out.println("Error.....!");
		}
		finally
		{
			try
			{
				fr.close();
				fw.close();
			}
			catch(Exception e)
			{
				System.out.println("Error.....!");
			}				
		}
	}
}
