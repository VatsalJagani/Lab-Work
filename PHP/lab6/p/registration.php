<html>
<head>
	<title> Register User </title>
</head>
<body>

<form method="post" action="register.php">
<table border="1" >
<tr><td colspan="3"> * Required field
</td></tr>
<tr>
<td>* User Name:</td>
<td colspan="2"><input type="text" name="username"></td>
</tr>

<tr>
<td>* New Password:</td>
<td colspan="2"><input type="password" name="password"></td>
</tr>

<tr>
<td>* Reenter New Password:</td>
<td colspan="2"><input type="password" name="repassword"></td>
</tr>

<tr>
<td colspan="3">* Male<input type="radio" name="gender" value="male"> 
				Female<input type="radio" name="gender" value="female">
</td></tr>

<tr>
<td>* Birth date: </td>
<td colspan="2">
<select name="bdate"> 
	<?php 
	for($i=1;$i<=31;$i++)
		echo "<option>$i</option>";
	?>
</select>  /
<select name="bmonth"> 
	<?php 
	for($i=1;$i<=12;$i++)
		echo "<option>$i</option>";
	?>
</select> /
<select name="byear"> 
	<?php 
	for($i=1947;$i<=2016;$i++)
		echo "<option>$i</option>";
	?>
</select>
</td>
</tr>

<tr>
<td>Interested in :</td>
<td colspan="2">
<input type="checkbox" name="choice1" value="training">Training
<input type="checkbox" name="choice2" value="placement">Placement
</td>
</tr>

<tr>
<td colspan="3">Achievements: </td>
</tr>

<tr>
<td colspan="3"><textarea name="achievements" cols="80" rows="5"></textarea>
</td>
</tr>

<tr>
<td align="center"><input type="submit" name="submit" value="submit"></td>
<td align="center"><input type="reset" name="reset" value="reset"></td>
<td><a href="http://localhost/lab/index.php">Home</a></td>
</tr>

</table>
</form>
</body>
</html>
