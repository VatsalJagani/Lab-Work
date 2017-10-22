<html>
<head>
<title>LAB-3</title>
<meta charset="utf-8">
              </head>
              <body>
              <?php
              echo '
              <form action="details.php" method="POST">
              <table border="3" align="center">
              <tr>
                <td colspan="3" align="center">* DETAILS REQUIRED</td>
              </tr>
              <tr>
                <td>*USER-NAME : </td>
                <td colspan="2"><input type="text" name="i-username" /></td>
              </tr>
              <tr>
                <td>*PASSWORD : </td>
                <td colspan="2"><input type="password" name="i-password" /></td>
              </tr>
              <tr>
                <td>*RE-PASSWORD : </td>
                <td colspan="2"><input type="password" name="ire-password" /></td>
              </tr>
              <tr>
                <td colspan="3">
                <input type="radio" name="Gender" value="male" /> Male
                <input type="radio" name="Gender" value="female" /> Female
                </td>
              </tr>
              <tr>
                <td>*BIRTHDATE : </td>
                <td colspan="2">';
echo '<select name="date">';
echo '<option  selected="selected" disabled="disabled">dd</option>';
for($a=01; $a<=31; $a++)
{
    echo '<option value="'.$a.'">'.$a.'</option>';
}
echo '</select>';

echo '<select name="month">';
echo '<option  selected="selected" disabled="disabled">mm</option>';
for($a=01; $a<=12; $a++)
{
    echo '<option value="'.$a.'">'.$a.'</option>';
}
echo '</select>';

echo '<select name="year">';
echo '<option  selected="selected" disabled="disabled">yyyy</option>';
for($a=1984; $a<=2016; $a++)
{
    echo '<option value="'.$a.'">'.$a.'</option>';
}

echo '</select>';
echo '</td>
</tr>
<tr>
<td>
INTRESTED IN :
</td>
<td colspan="2">
<input type="checkbox" name="training"  value="training" /> TRAINING
<input type="checkbox" name="placement"  value="placement" /> PLACEMENT
</td>
</tr>
<tr>
<td colspan="3" align="center">* ACHIEVMENTS</td>
</tr>
<tr>
<td colspan="3"> <textarea rows="4" cols="50" name="achievement">

</textarea>
</td>
</tr>
<tr>
<td align="center"><input type="submit" value="Submit"></td>
<td align="center"><input type="reset" value="Clear"></td>
<td align="center"><a href="login.php">HOME</a></td>
</tr>
</table>
</form>';
?>
</body>
</html>
