/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

package Converter;

/**
 *
 * @author user1
 */
public class ConvertBean 
{
    private double f1,f2,ans;
    private String p1,p2,convert;
    
    public void setF1(double s)
    {
        f1=s;
    }
     public void setF2(double s)
    {
        f2=s;
    }
    
    public void setP1(String s)
    {
        p1=s;
    }
    
    public void setP2(String s)
    {
        p2=s;
    }
    public void setConvert(String s)
    {
        convert=s;
    }
    
    public double getAns()
    {
            ans=f1;
            
        if(convert.equals("Temparature"))
        {
        
            System.err.println(ans);
             
            if(p1.equals("Celsius"))
            {   
                if(p2.equals("Fahrenheit"))
                    ans=(9.0/5.0)*ans+32;
            }
            
            if(p1.equals("Fahrenheit"))
            {
                if(p2.equals("Celsius"))
                    ans=((ans-32)*5)/9;
            }
            
        }
        else
        {
            if(p1.equals("meter"))
            {
                if(p2.equals("CentiMeter"))
                    ans*=100;
                else if(p2.equals("Inch"))
                    ans*=39.3701;
            }
            else if(p1.equals("Inch"))
            {
                if(p2.equals("CentiMeter"))
                    ans*=2.54;
                else if(p2.equals("Meter"))
                    ans*=0.254;
            }
            else
            {
                if(p2.equals("Inch"))
                    ans*=0.393701;
                else if(p2.equals("Meter"))
                    ans*=0.01;
            }
        }
        
        return ans;
    }
}
