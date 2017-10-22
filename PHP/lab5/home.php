<?php 
session_start() ;
if(isset($_SESSION['count']))
$_SESSION['count']+=1 ;
else
$_SESSION['count']=0 ;
?>

<html>
<body>
<form action="" method="post">
<table border="1">
<tr><td>nimmi</td></tr>
<tr> <td colspan='5'> Welcome <?php echo $_SESSION['uname']; ?> to online shopping.</td></tr>

<tr>
<td><a href="viewCart.php">View Cart(<?php echo $_SESSION['count'] ; ?>)</a></td>
<td colspan="3"><?php if(isset['msg']) echo $_GET['msg'] ; ?></td>
<td><a href="logout.php">Logout</a></td>
</tr>

<?php 
$arr=array(array(array("<img src='images/fridge/0.jpg'>",array("Company:LG","Specification:110L","Price=250000"),"<input type='submit' name='f1'>Add2Cart"),
				array("<img src='images/fridge/1.jpg'>",array("Company:LG","Specification:210L","Price=350000"),"<input type='submit' name='f2'>Add2Cart"),
				array("<img src='images/fridge/2.jpg'>",array("Company:LG","Specification:220L","Price=400000"),"<input type='submit' name='f3'>Add2Cart"),
				array("<img src='images/fridge/3.jpg'>",array("Company:LG","Specification:110L","Price=250000"),"<input type='submit' name='f4'>Add2Cart"),
				array("<img src='images/fridge/4.jpg'>",array("Company:LG","Specification:110L","Price=250000"),"<input type='submit' name='f5'>Add2Cart")),
			array(array("<img src='images/tv/0.jpg'>",array("Company:LG","Specification:32","Price=250000"),"<input type='submit' name='t1'>Add2Cart"),
				array("<img src='images/tv/1.jpg'>",array("Company:LG","Specification:32","Price=250000"),"<input type='submit' name='t2'>Add2Cart"),
				array("<img src='images/tv/2.jpg'>",array("Company:LG","Specification:32","Price=250000"),"<input type='submit' name='t3'>Add2Cart"),
				array("<img src='images/tv/3.jpg'>",array("Company:LG","Specification:32","Price=250000"),"<input type='submit' name='t4'>Add2Cart"),
				array("<img src='images/tv/4.jpg'>",array("Company:LG","Specification:32","Price=250000"),"<input type='submit' name='t5'>Add2Cart")),
			array(array("<img src='images/mobile/0.jpg'>",array("Company:LG","Specification:32","Price=250000"),"<input type='submit' name='m1'>Add2Cart"),
				array("<img src='images/mobile/1.jpg'>",array("Company:LG","Specification:32","Price=250000"),"<input type='submit' name='m2'>Add2Cart"),
				array("<img src='images/mobile/2.jpg'>",array("Company:LG","Specification:32","Price=250000"),"<input type='submit' name='m3'>Add2Cart"),
				array("<img src='images/mobile/3.jpg'>",array("Company:LG","Specification:32","Price=250000"),"<input type='submit' name='m4'>Add2Cart"),
				array("<img src='images/mobile/4.jpg'>",array("Company:LG","Specification:32","Price=250000"),"<input type='submit' name='m5'>Add2Cart"))) ;
for($i=0 ; $i<3  $i++){
	echo "<tr>" ;
	for($j=0 ; $j<5 ; $j++)
	{
	echo "<td>".$arr[$i][$j][0]."</td>" ;
	}
	echo "</tr>" ;
	echo "<tr>"
	for($j=0 ; $j<5 ; $j++)
	{	echo "<td>" ;
		for($k=0 ; $k<3 ; $k++)
		{
			echo $arr[$i][$j][1][$k]."<br>" ;
		}
		echo "</td"> ;
	}
	echo "<tr>" ;
	for($j=0 ; $j<5 ; $j++)
	{
		echo "<td>".$arr[$i][$j][2]."</td>" ;
	}
	echo "</tr>" ;

}
?>

</table>
</form>
</body>
</html>
