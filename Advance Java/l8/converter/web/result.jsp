<%-- 
    Document   : convert
    Created on : Feb 23, 2016, 9:37:04 PM
    Author     : VATSAL
--%>

<%@page contentType="text/html" pageEncoding="UTF-8"%>
<%@taglib prefix="c" uri="http://java.sun.com/jsp/jstl/core"%>
<!DOCTYPE html>
<jsp:useBean id="length" scope="request" class="beans.Length" />
<html>
    <head>
        <meta http-equiv="Content-Type" content="text/html; charset=UTF-8">
        <title>${param.type} converter</title>
    </head>
    <body>
        <h1>Convert ${param.type} !</h1>

        <h3>
            <table border="1" align="center">
                <tr>
                    <th>From</th>
                    <th>To</th>
                </tr>
                <tr>

                    <c:choose>
                        <c:when test="${param.from == 'meter'}">
                            <td>${param.from}</td><td>${param.to}</td>
                            <jsp:setProperty name="length" property="meter" param="f" />
                        </c:when>
                        <c:when test="${param.from == 'centimeter'}">
                            <td>${param.from}</td><td>${param.to}</td>
                            <jsp:setProperty name="length" property="centimeter" param="f" />
                        </c:when>
                        <c:when test="${param.from == 'inch'}">
                            <td>${param.from}</td><td>${param.to}</td>
                            <jsp:setProperty name="length" property="inch" param="f" />
                        </c:when>
                    </c:choose>
                </tr>
                <tr>
                    <td>${param.f}</td>
                    <td>
                        <c:choose>
                            <c:when test="${param.to == 'meter'}">${length.meter}</c:when>
                            <c:when test="${param.to == 'centimeter'}">${length.centimeter}</c:when>
                            <c:when test="${param.to == 'inch'}">${length.inch}</c:when>
                        </c:choose>
                    </td>


                </tr>
            </table>
        </h3>
        <h4><a href="index.jsp">Main</a></h4>
    </body>
</html>
