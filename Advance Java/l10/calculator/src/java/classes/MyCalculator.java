/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

package classes;

import javax.servlet.jsp.JspWriter;
import javax.servlet.jsp.JspException;
import javax.servlet.jsp.tagext.JspFragment;
import javax.servlet.jsp.tagext.SimpleTagSupport;

/**
 *
 * @author user1
 */
public class MyCalculator extends SimpleTagSupport {
    private String op2;
    private String op1;
    private String operator;

    /**
     * Called by the container to invoke this tag. The implementation of this
     * method is provided by the tag library developer, and handles all tag
     * processing, body iteration, etc.
     */
    @Override
    public void doTag() throws JspException {
        JspWriter out = getJspContext().getOut();
        
        try {
            // TODO: insert code to write html before writing the body content.
            // e.g.:
            //
            // out.println("<strong>" + attribute_1 + "</strong>");
            // out.println("    <blockquote>");

            JspFragment f = getJspBody();
            if (f != null) {
                f.invoke(out);
            }

            // TODO: insert code to write html after writing the body content.
            // e.g.:
            //
            // out.println("    </blockquote>");
            double opp1=Double.parseDouble(op1);
            double opp2=Double.parseDouble(op2);
            double opp=Double.parseDouble(operator);
            
            
            //  switch case
            
            double ans=opp1+opp2;
            
            
            
            
            out.print(ans);
        } catch (java.io.IOException ex) {
            throw new JspException("Error in MyCalculator tag", ex);
        }
    }

    public void setOp2(String op2) {
        this.op2 = op2;
    }

    public void setOp1(String op1) {
        this.op1 = op1;
    }

    public void setOperator(String operator) {
        this.operator = operator;
    }
    
}
