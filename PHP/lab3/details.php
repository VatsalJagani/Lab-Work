<?php

if( $_POST["i-username"] & $_POST["i-password"] & $_POST["ire-password"] & $_POST["Gender"] & $_POST["date"] & $_POST["month"] & $_POST["year"])
	 {
		if(($_POST["i-password"]) == ($_POST["ire-password"]))
		{
			echo '<h1 align="center">YOU ARE REGISTERED</h1><br />';
			echo '
						<table align="center" border=" 2 " width=" 680 " height=" 320 ">
						<tr>
							<td>USER-NAME : </td>
							<td >'.$_POST['i-username'].'</td>
						</tr>
						<tr>
							<td>PASSWORD : </td>
							<td>'.$_POST['i-password'].'</td>
						</tr>
						<tr>
							<td>GENDER : </td>
							<td>'.$_POST['Gender'].'</td>
						</tr>
						<tr>
							<td>BIRTHDATE : </td>
							<td>'.$_POST['date'].'/'.$_POST['month'].'/'.$_POST['year'].'</td>
						</tr>';
						if($_POST['achievement'])
						{
							echo '<tr>';
							echo '<td>ACHIEVEMENTS : </td>
								<td>'.$_POST['achievement'].'</td>';
							echo '</tr>';
						}
						if($_POST['training'] | $_POST['placement'])
						{
							if($_POST['training'] & $_POST['placement'])
							{
								echo '<tr>';
								echo "<td>INTRESTED IN : </td>";
								if($_POST['placement'])
								{
									echo "<td>".$_POST['placement']." & ".$_POST['training']."</td>";
								}
							//	exit();
							}
							else
							{
								echo '<tr>';
								echo "<td>INTRESTED IN : </td>";
								if($_POST['placement'])
								{

									echo "<td>".$_POST['placement']."</td>";
								}
								if($_POST['training'])
								{
									echo "<td>".$_POST['training']."</td>";
								}
								echo '</tr>';
								//exit();
							}
						}

						echo "
						<tr>
						<td colspan='2' align='center'><a href='login.php'>HOME</a></td>
						</tr>
						</table>";
			exit();
		}
		else
		{
			echo "<h4>Check for the password again.</h4>";
			exit();
		}

	exit();
	}
	else
	{
		echo "<h4>Check for the details.</h4>";
		exit();
	}
 ?>
