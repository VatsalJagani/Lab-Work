/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */
package filters;

import java.io.IOException;
import java.io.PrintWriter;
import javax.servlet.*;
import javax.servlet.http.*;

/**
 *
 * @author user1
 */
public class MyFilter implements Filter{

    FilterConfig fc;
    
    @Override
    public void init(FilterConfig filterConfig) throws ServletException {
        fc=filterConfig;
    }

    @Override
    public void doFilter(ServletRequest request, ServletResponse response, FilterChain chain) throws IOException, ServletException {
        HttpServletRequest req=(HttpServletRequest)request;
        HttpServletResponse res=(HttpServletResponse)response;
        
        //time
        long start = System.currentTimeMillis();
        System.out.println("Milliseconds in: " + start);
        
        PrintWriter out=res.getWriter();
        out.println("1");
        String uri=req.getRequestURI();
        HttpSession session=null;
        System.out.println(uri);
        if(uri.equals("/login_verifier/login.jsp"))
        {
            out.println("2");
        }
        else
        {
            out.println("3");
            session=req.getSession(false);
        
            RequestDispatcher rs=request.getRequestDispatcher("login.jsp");

            System.out.println("filter");
out.println("4");
            if(session==null)
            {
                rs.forward(req, res);
//                res.sendRedirect("login.jsp");
                out.println("4");
                System.out.println("session null");
            }
        }
        
        long end = System.currentTimeMillis();
        System.out.println("Milliseconds out: " + end);
        
        System.out.println("Time is :"+(end-start));
        
        chain.doFilter(request, response);
    }

    @Override
    public void destroy() {
        
    }
    
}
