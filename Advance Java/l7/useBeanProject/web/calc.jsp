<%-- 
    Document   : calc
    Created on : Feb 8, 2016, 4:35:07 PM
    Author     : user1
--%>

<%@page contentType="text/html" pageEncoding="UTF-8"%>
<%@taglib prefix="c" uri="http://java.sun.com/jsp/jstl/core" %>
<!DOCTYPE html>
<html>
    
    <head>
        <meta http-equiv="Content-Type" content="text/html; charset=UTF-8">
        <title><c:out value="${calculator.result}" default="calc" /></title>
    </head>
    <body>
        <h1 align="center">Online calculator</h1>
        <form method="post">
            <table>
                <tr>
                    <td>Op1</td>
                    <td><input type="text" name="op1"></td>
                </tr>
                <tr>
                    <td>Op2</td>
                    <td><input type="text" name="op2"></td>
                </tr>
                <tr>
                    <td>Operator</td>
                    <td><input type="text" name="operator"></td>
                </tr>
                <tr>
                    <td><input type="submit" value="="></td>
                    <td><input type="reset" value="clear"></td>
                </tr>
            </table>
            <br>
            <br>
            <h3>
                Type 1 for +<br>
                Type 2 for -<br>
                Type 3 for *<br>
                Type 4 for /<br>
            </h3>
        </form>
        <h1 align="center">Here is Your Result!</h1>
        <jsp:useBean id="calculator" class="classes.BeanCalc" scope="request">
            <jsp:setProperty name="calculator" property="*"/>
        </jsp:useBean>
        <h2 align="center"><jsp:getProperty name="calculator" property="result"/></h2>
    </body>
</html>
