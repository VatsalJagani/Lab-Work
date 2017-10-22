<html>
<head>
<title>Chess Board</title>
</head>
<body>
<table border="1" align="center" widht="270" higth="270" cellspacing="0" cellpadding="5" > 

<?php
for($i=1;$i<=8;$i++)
{
	echo '<tr>';
	for($j=1;$j<=8;$j++)
	{
		echo '<td hight="30" widht="30" ';
		if((($i+$j)%2)!=0)
		{
			echo 'bgcolor="black"';
		}
		else
		{
			echo 'bgcolor="white"';
		}
		echo '></td>';
	}
	echo '</tr>';
}
?>

</table>
</body>
</html>