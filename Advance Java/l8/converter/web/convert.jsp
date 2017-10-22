<%-- 
    Document   : convert
    Created on : Feb 23, 2016, 9:37:04 PM
    Author     : VATSAL
--%>

<%@page contentType="text/html" pageEncoding="UTF-8"%>
<%@taglib prefix="c" uri="http://java.sun.com/jsp/jstl/core"%>
<!DOCTYPE html>
<html>
    <head>
        <meta http-equiv="Content-Type" content="text/html; charset=UTF-8">
        <title>${param.type} converter</title>
    </head>
    <body>
        <h1>Convert ${param.type} !</h1>
        <form action="result.jsp">
            <input type="hidden" name="type" value="${param.type}">
            <select name="from">
                <c:if test="${param.type == 'Length'}">
                    <option value="meter">Meter</option>
                    <option value="centimeter">Centimeter</option>
                    <option value="inch">Inch</option>
                </c:if>
            </select>
            
            <select name="to">
                <c:if test="${param.type == 'Length'}">
                    <option value="meter">Meter</option>
                    <option value="centimeter">Centimeter</option>
                    <option value="inch">Inch</option>
                </c:if>
            </select>
            </br>
            <input type="text" name="f" value="1">
            &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;
            
            <input type="submit" value="convert">
        </form>
    </body>
</html>
