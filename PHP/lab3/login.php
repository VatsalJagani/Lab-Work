<html>

<head>
	<title>LAB-3</title>
	<meta charset="utf-8">
</head>

<body>
	<?php
	 echo	'<form action="post.php" method="POST">
				<table border="1">
					<tr>
						<td>USER-NAME : </td>
						<td><input type="text" name="username"></td>
					</tr>
					<tr>
						<td>PASSWORD : </td>
						<td><input type="password" name="password"></td>
					</tr>
					<tr>
						<td>remember Me..</td>
						<td><input type="checkbox" name="rememberMe"></td>
					</tr>
					<tr>
						<td align="center"><input type="submit" value="Login"></td>
						<td align="center"><input type="reset" value="Reset"></td>
					</tr>
					<tr>
						<td colspan="2" align="center"><a href="registration.php">New-User</a></td>
					</tr>
				</table>
			</form>';
	?>
</body>
</html>_
