package org.apache.jsp;

import javax.servlet.*;
import javax.servlet.http.*;
import javax.servlet.jsp.*;

public final class calc_jsp extends org.apache.jasper.runtime.HttpJspBase
    implements org.apache.jasper.runtime.JspSourceDependent {

  private static final JspFactory _jspxFactory = JspFactory.getDefaultFactory();

  private static java.util.List<String> _jspx_dependants;

  private org.apache.jasper.runtime.TagHandlerPool _jspx_tagPool_c_out_value_default_nobody;

  private org.glassfish.jsp.api.ResourceInjector _jspx_resourceInjector;

  public java.util.List<String> getDependants() {
    return _jspx_dependants;
  }

  public void _jspInit() {
    _jspx_tagPool_c_out_value_default_nobody = org.apache.jasper.runtime.TagHandlerPool.getTagHandlerPool(getServletConfig());
  }

  public void _jspDestroy() {
    _jspx_tagPool_c_out_value_default_nobody.release();
  }

  public void _jspService(HttpServletRequest request, HttpServletResponse response)
        throws java.io.IOException, ServletException {

    PageContext pageContext = null;
    HttpSession session = null;
    ServletContext application = null;
    ServletConfig config = null;
    JspWriter out = null;
    Object page = this;
    JspWriter _jspx_out = null;
    PageContext _jspx_page_context = null;

    try {
      response.setContentType("text/html;charset=UTF-8");
      pageContext = _jspxFactory.getPageContext(this, request, response,
      			null, true, 8192, true);
      _jspx_page_context = pageContext;
      application = pageContext.getServletContext();
      config = pageContext.getServletConfig();
      session = pageContext.getSession();
      out = pageContext.getOut();
      _jspx_out = out;
      _jspx_resourceInjector = (org.glassfish.jsp.api.ResourceInjector) application.getAttribute("com.sun.appserv.jsp.resource.injector");

      out.write("\n");
      out.write("\n");
      out.write("\n");
      out.write("\n");
      out.write("<!DOCTYPE html>\n");
      out.write("<html>\n");
      out.write("    ");
      classes.BeanCalc calculator = null;
      synchronized (request) {
        calculator = (classes.BeanCalc) _jspx_page_context.getAttribute("calculator", PageContext.REQUEST_SCOPE);
        if (calculator == null){
          calculator = new classes.BeanCalc();
          _jspx_page_context.setAttribute("calculator", calculator, PageContext.REQUEST_SCOPE);
          out.write("\n");
          out.write("            ");
          org.apache.jasper.runtime.JspRuntimeLibrary.introspect(_jspx_page_context.findAttribute("calculator"), request);
          out.write("\n");
          out.write("        ");
        }
      }
      out.write("\n");
      out.write("    <head>\n");
      out.write("        <meta http-equiv=\"Content-Type\" content=\"text/html; charset=UTF-8\">\n");
      out.write("        <title>");
      if (_jspx_meth_c_out_0(_jspx_page_context))
        return;
      out.write("</title>\n");
      out.write("    </head>\n");
      out.write("    <body>\n");
      out.write("        <h1 align=\"center\">Online calculator</h1>\n");
      out.write("        <form method=\"post\">\n");
      out.write("            <table>\n");
      out.write("                <tr>\n");
      out.write("                    <td>Op1</td>\n");
      out.write("                    <td><input type=\"text\" name=\"op1\"></td>\n");
      out.write("                </tr>\n");
      out.write("                <tr>\n");
      out.write("                    <td>Op2</td>\n");
      out.write("                    <td><input type=\"text\" name=\"op2\"></td>\n");
      out.write("                </tr>\n");
      out.write("                <tr>\n");
      out.write("                    <td>Operator</td>\n");
      out.write("                    <td><input type=\"text\" name=\"operator\"></td>\n");
      out.write("                </tr>\n");
      out.write("                <tr>\n");
      out.write("                    <td><input type=\"submit\" value=\"=\"></td>\n");
      out.write("                    <td><input type=\"reset\" value=\"clear\"></td>\n");
      out.write("                </tr>\n");
      out.write("            </table>\n");
      out.write("            <br>\n");
      out.write("            <br>\n");
      out.write("            <h3>\n");
      out.write("                Type 1 for +<br>\n");
      out.write("                Type 2 for -<br>\n");
      out.write("                Type 3 for *<br>\n");
      out.write("                Type 4 for /<br>\n");
      out.write("            </h3>\n");
      out.write("        </form>\n");
      out.write("        <h1 align=\"center\">Here is Your Result!</h1>\n");
      out.write("        \n");
      out.write("        <h2 align=\"center\">");
      out.write(org.apache.jasper.runtime.JspRuntimeLibrary.toString((((classes.BeanCalc)_jspx_page_context.findAttribute("calculator")).getResult())));
      out.write("</h2>\n");
      out.write("    </body>\n");
      out.write("</html>\n");
    } catch (Throwable t) {
      if (!(t instanceof SkipPageException)){
        out = _jspx_out;
        if (out != null && out.getBufferSize() != 0)
          out.clearBuffer();
        if (_jspx_page_context != null) _jspx_page_context.handlePageException(t);
        else throw new ServletException(t);
      }
    } finally {
      _jspxFactory.releasePageContext(_jspx_page_context);
    }
  }

  private boolean _jspx_meth_c_out_0(PageContext _jspx_page_context)
          throws Throwable {
    PageContext pageContext = _jspx_page_context;
    JspWriter out = _jspx_page_context.getOut();
    //  c:out
    org.apache.taglibs.standard.tag.rt.core.OutTag _jspx_th_c_out_0 = (org.apache.taglibs.standard.tag.rt.core.OutTag) _jspx_tagPool_c_out_value_default_nobody.get(org.apache.taglibs.standard.tag.rt.core.OutTag.class);
    _jspx_th_c_out_0.setPageContext(_jspx_page_context);
    _jspx_th_c_out_0.setParent(null);
    _jspx_th_c_out_0.setValue((java.lang.Object) org.apache.jasper.runtime.PageContextImpl.evaluateExpression("${calculator.result}", java.lang.Object.class, (PageContext)_jspx_page_context, null));
    _jspx_th_c_out_0.setDefault("calc");
    int _jspx_eval_c_out_0 = _jspx_th_c_out_0.doStartTag();
    if (_jspx_th_c_out_0.doEndTag() == javax.servlet.jsp.tagext.Tag.SKIP_PAGE) {
      _jspx_tagPool_c_out_value_default_nobody.reuse(_jspx_th_c_out_0);
      return true;
    }
    _jspx_tagPool_c_out_value_default_nobody.reuse(_jspx_th_c_out_0);
    return false;
  }
}
