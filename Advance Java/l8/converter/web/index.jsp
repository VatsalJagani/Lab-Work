<%-- 
    Document   : index
    Created on : Feb 23, 2016, 9:30:05 PM
    Author     : VATSAL
--%>

<%@page contentType="text/html" pageEncoding="UTF-8"%>
<!DOCTYPE html>
<html>
    <head>
        <meta http-equiv="Content-Type" content="text/html; charset=UTF-8">
        <title>Converter</title>
    </head>
    <body>
        <h1>Converter !</h1>
        <form action="convert.jsp">
            <select name="type">
                <option value="Temerature">Temperature</option>
                <option value="Length">Length</option>
            </select>
            </br>
            <input type="submit" value="Get">
        </form>
    </body>
</html>
