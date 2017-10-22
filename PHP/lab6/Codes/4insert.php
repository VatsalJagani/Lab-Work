<?php
try{
	$dbhandler = new PDO('mysql:host=127.0.0.1;dbname=user1','feedback','feedback');
	echo "Connected...<br/>";
	$dbhandler->setAttribute(PDO::ATTR_ERRMODE,PDO::ERRMODE_EXCEPTION);
	$sql="insert into guestbook (name,message,posted) values ('Vivek','Good night',now())";
	$query=$dbhandler->query($sql);
	
}
catch(PDOException $e){
	echo $e->getMessage();
	die();
}


?>