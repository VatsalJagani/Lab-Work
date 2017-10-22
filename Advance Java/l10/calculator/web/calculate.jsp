<%-- 
    Document   : calculate
    Created on : Mar 14, 2016, 5:31:06 PM
    Author     : user1
--%>

<%@page contentType="text/html" pageEncoding="UTF-8"%>
<%@taglib prefix="my" uri="hello" %>
<!DOCTYPE html>
<html>
    <head>
        <meta http-equiv="Content-Type" content="text/html; charset=UTF-8">
        <title>JSP Page</title>
    </head>
    <body>
        <h1>Ans : <my:MyCalculator op1="${param.op1}" op2="${param.op2}" operator="${param.operator}" /></h1>
    </body>
</html>
