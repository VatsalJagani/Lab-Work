<%-- 
    Document   : doConvert
    Created on : Feb 26, 2016, 10:57:20 PM
    Author     : user1
--%>

<%@ taglib prefix="c" uri="http://java.sun.com/jsp/jstl/core" %>
<%@page contentType="text/html" pageEncoding="UTF-8"%>
<!DOCTYPE html>
<html>
    <head>
        <meta http-equiv="Content-Type" content="text/html; charset=UTF-8">
        <title>JSP Page</title>
       
    </head>
    <body align="center">
        <form action="">
            <select name="convert">
                <option value="Length">Length</option>
                <option value="Temparature">Temparature</option>
            </select>
            <input type="submit" value="Select"/><br>
        </form>
    </body>
    
    <c:if test="${param.convert!=null}">
        <form action="" >
            <input type="hidden" name="convert" value="${param.convert}" />
            <c:if test="${param.convert =='Length'}">
            
                <table align="center" border="1">
                    <tr>
                        <td>
                            <input type="number" name="f1" value="${param.f1}">
                        </td>
                        <td rowspan="2">=</td>
                        <td>
                            <input type="number" name="f2"  
                                   <c:if test="${param.f1!=null}" >

                                       <jsp:useBean id="convert" class="Converter.ConvertBean">
                                           <jsp:setProperty name="convert" property="*"/>
                                       </jsp:useBean>
                                       value='<jsp:getProperty name="convert" property="ans"/>'
                                   </c:if>>
                        </td>
                    </tr>
                    <tr>
                        <td>
                            <select name="p1">
                                <option value="meter">Meter</option>
                                <option value="Inch">Inch</option>
                                 <option value="CentiMeter">CentiMeter</option>
                            </select>
                        </td>
                        <td>
                            <select name="p2">
                                <option value="meter">Meter</option>
                                <option value="Inch">Inch</option>
                                <option value="CentiMeter">CentiMeter</option>
                            </select>
                        </td>
                    </tr>
                </table>
            </c:if>
            <c:if test="${param.convert =='Temparature'}">
        
                <table align="center" border="1">
                      <tr>
                        <td>
                            <input type="number" name="f1" value="${param.f1}">
                        </td>
                        <td rowspan="2">=</td>
                        <td>
                            <input type="number" name="f2"  
                                   <c:if test="${param.f1!=null}" >

                                       <jsp:useBean id="convert2" class="Converter.ConvertBean">
                                           <jsp:setProperty name="convert2" property="*"/>
                                       </jsp:useBean>
                                       value='<jsp:getProperty name="convert2" property="ans"/>'
                                   </c:if>>
                        </td>
                    </tr>
                    <tr>
                        <td>
                            <select name="p1">
                                <option value="Celsius">Celsius</option>
                                <option value="Fahrenheit">Fahrenheit</option>
                            </select>
                        </td>
                        <td>
                            <select name="p2">
                                <option value="Celsius">Celsius</option>
                                <option value="Fahrenheit">Fahrenheit</option>
                            </select>
                        </td>
                    </tr>
                </table>
            </c:if>
            <input type="submit" value="submit"/>
        </form>
    </c:if>
        
</html>
