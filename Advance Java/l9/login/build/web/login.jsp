<%-- 
    Document   : login
    Created on : Mar 1, 2016, 9:37:29 PM
    Author     : user1
--%>

<%@page contentType="text/html" pageEncoding="UTF-8"%>
<!DOCTYPE html>
<html>
    <head>
        <meta http-equiv="Content-Type" content="text/html; charset=UTF-8">
        <title>login</title>
    </head>
    <body>
        <h1>Hello World!</h1>
        <form action="/Verifier" method="post">
            <table border="1">
                <tr>
                    <td>UserName :</td>
                    <td><input type="text" name="uname"></td>
                </tr>
                <tr>
                    <td>Password :</td>
                    <td><input type="password" name="passwd"></td>
                </tr>
                <tr>
                    <td><input type="submit"></td>
                </tr>
            </table>
        </form>
    </body>
</html>
