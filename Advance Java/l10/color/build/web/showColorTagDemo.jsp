<%-- 
    Document   : showColorTagDemo
    Created on : Mar 14, 2016, 4:25:46 PM
    Author     : user1
--%>

<%@page contentType="text/html" pageEncoding="UTF-8"%>
<%@ taglib tagdir="/WEB-INF/tags" prefix="my" %>
<!DOCTYPE html>
<html>
    <head>
        <meta http-equiv="Content-Type" content="text/html; charset=UTF-8">
        <title>Hi</title>
    </head>
    <body>
        <h1>Hello World! The World of Colors</h1>
        <table/>
            <my:showColor color="${colors}" />
    </body>
</html>
