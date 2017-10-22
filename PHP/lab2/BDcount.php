<html>
<head>
<title>Days Counter</title>
</head>

<body>
<form>
<table border="1" align="center">
<tr>
<th colspan="2">select Birthday</th>
</tr>
<tr>
<td>Date</td>
<td>
<select name="day">
<?php
for($i=1;$i<=31;$i++)
{
	echo '<option value="'.$i.'">'.$i.'</option>';
}
?>
</select>
</td>
</tr>
<tr>
<td>Date</td>
<td>
<select name="month">
<?php
for($i=1;$i<=12;$i++)
{
	echo '<option value="'.$i.'">'.$i.'</option>';
}
?>
</select>
</td>
</tr>
<tr>
<td>Date</td>
<td>
<select name="year">
<?php
for($i=1970;$i<=2016;$i++)
{
	echo '<option value="'.$i.'">'.$i.'</option>';
}
?>
</select>
</td>
</tr>

<tr>
<td colspan="2"><input type="submit"></td>
</tr>
</table>
</form>
</body>
</html>



<?php
$day=strftime("%e");
$month=strftime("%I");
$year=strftime("%Y");
if($_POST['day'])
{
$Bday=$_POST["day"];
$Bmonth=$_POST['month'];
$Byear=$_POST['year'];
}
else{
echo 'hhihihihih';
}

?>