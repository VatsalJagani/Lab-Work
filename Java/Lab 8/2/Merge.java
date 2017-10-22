import java.util.*;
import java.io.*;

class Merge{
	public static void main(String args[]){
		try{
			String s = args[0];
			int cut = 0;
			FileInputStream fis;
			FileOutputStream fos = new FileOutputStream(args[1]);
			byte buffer[] = new byte[1024];
			while(true){
				try{	
					s=args[0]+cut;
					fis = new FileInputStream(s);
					cut++;
				}
				catch(FileNotFoundException e){
					break;
				}
					int i=fis.read(buffer,0,1024);
					fos.write(buffer,0,i);
					fos.flush();
					fis.close();
			}
			fos.close();
		}
		catch(Exception e){
			System.out.println(e);
		}
	}
}

