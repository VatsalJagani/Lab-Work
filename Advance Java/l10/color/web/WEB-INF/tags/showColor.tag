

<%@ taglib prefix="c" uri="http://java.sun.com/jsp/jstl/core" %>
<%@tag description="put the tag description here" pageEncoding="UTF-8"%>

<%-- The list of normal or fragment attributes can be specified here: --%>
<%@attribute name="color" required="true" rtexprvalue="true" type="java.util.ArrayList"%>

<%-- any content can be specified here e.g.: --%>
<table>
<c:forEach items="${color}" var="col">
    <tr><td>${col.name}</td><td>${col.rgb}</td></tr>
</c:forEach>
</table> 