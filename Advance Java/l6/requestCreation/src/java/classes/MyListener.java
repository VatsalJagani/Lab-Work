/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package classes;

import javax.servlet.ServletRequestEvent;
import javax.servlet.ServletRequestListener;

/**
 *
 * @author keval dhol
 */
public class MyListener implements ServletRequestListener{

    @Override
    public void requestDestroyed(ServletRequestEvent sre) {
        System.out.println("new request come");
    }

    @Override
    public void requestInitialized(ServletRequestEvent sre) {
        throw new UnsupportedOperationException("Not supported yet."); //To change body of generated methods, choose Tools | Templates.
    }
    
}
