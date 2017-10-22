<%-- 
    Document   : displaymovielist
    Created on : Feb 8, 2016, 4:59:37 PM
    Author     : user1
--%>
<%@taglib prefix="c" uri="http://java.sun.com/jsp/jstl/core" %>
<%@page contentType="text/html" pageEncoding="UTF-8"%>
<!DOCTYPE html>
<html>
    <head>
        <meta http-equiv="Content-Type" content="text/html; charset=UTF-8">
        <title>Movie_list</title>
    </head>
    <body>
        <h1>Movie List!</h1>
        <table align="center" border="1">
            <% String [] list=(String [])request.getAttribute("list");
            for(int i=0;i<list.length;i++){
            %>
            <tr>
                <td><%= i %></td>
                <td><%= list[i] %></td>
            </tr>
            <% } %>
        </table>
        <br>
        <br>
        <table align="center" border="1">
            <c:forEach var="movie" items="${list}" varStatus="cn">
                <tr>
                <td> ${cn.count} </td>
                <td>${movie}</td>
            </tr>
            </c:forEach>
        </table>
    </body>
</html>
