import java.util.*;
import java.io.*;

class Splits{

	public static void main(String args[]){
		try{	
			int size= 1024;
			FileInputStream fis =new FileInputStream(args[0]);
			byte buffer[] = new byte[size];
			String fnm;
			int cut =0;
			while (true){
				int i = fis.read(buffer,0,size);
				if(i==-1){break;}
				fnm = args[1]+cut;
				cut++;
				FileOutputStream fos =new FileOutputStream(fnm);
				fos.write(buffer,0,i);
				fos.close();
			}
		}
		catch(Exception e){
			System.out.println("Exception occured" + e);
		} 
	}
}
