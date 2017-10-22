/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package classes;

import javax.servlet.ServletContext;
import javax.servlet.ServletRequestEvent;
import javax.servlet.ServletRequestListener;

/**
 *
 * @author keval dhol
 */
public class MyRequestListener implements ServletRequestListener{

    @Override
    public void requestDestroyed(ServletRequestEvent sre) {

        ServletContext sc=sre.getServletContext();
        Integer i;
        i=(Integer)sc.getAttribute("hits");
        i++;
        sc.setAttribute("hits",i);
    }

    @Override
    public void requestInitialized(ServletRequestEvent sre) {
       }
    
}
