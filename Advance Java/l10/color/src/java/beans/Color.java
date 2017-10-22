/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

package beans;

/**
 *
 * @author user1
 */
public class Color {
    private String name;
    private String rGB;
    public void setRgb(String rgb)
    {
        rGB=rgb;
    }
    public String getRgb()
    {
        return rGB;
    }
    public void setName(String n)
    {
        name=n;
    }
    public String getName()
    {
        return name;
    }
    public String toString()
    {
        return("Color:"+name+" RGB:"+rGB);
    }
}
