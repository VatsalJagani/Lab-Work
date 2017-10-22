/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package classes;

import javax.servlet.ServletContext;
import javax.servlet.ServletContextEvent;
import javax.servlet.ServletContextListener;

/**
 *
 * @author keval dhol
 */
public class MyContextListener implements ServletContextListener{

    int hits;
    @Override
    public void contextInitialized(ServletContextEvent sce) {
  
        ServletContext sc=sce.getServletContext();
        sc.setAttribute("hits",new Integer(0));
    }

    @Override
    public void contextDestroyed(ServletContextEvent sce) {
        throw new UnsupportedOperationException("Not supported yet."); //To change body of generated methods, choose Tools | Templates.
    }
    
}
