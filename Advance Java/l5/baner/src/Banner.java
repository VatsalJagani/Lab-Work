/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author VATSAL
 */
import java.awt.*;
import java.applet.Applet;

public class Banner extends Applet{
    BannerBean l=new BannerBean();
    public void init()
    {
        l.setS("vatsal   jagani         ");
        l.setFlag(true);
        add(l);
    }
}
