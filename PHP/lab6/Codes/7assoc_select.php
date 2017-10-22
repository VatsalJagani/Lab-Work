<?php
try{
	$dbhandler = new PDO('mysql:host=127.0.0.1;dbname=user1','feedback','feedback');
	echo "Connected...<br/>";
	$dbhandler->setAttribute(PDO::ATTR_ERRMODE,PDO::ERRMODE_EXCEPTION);
	$query=$dbhandler->query('select * from guestbook');
		while($r=$query->fetch(PDO::FETCH_ASSOC)){
			
			//echo data in associative format
			echo '<pre>',print_r($r),'</pre>';
		}
}
catch(PDOException $e){
	echo $e->getMessage();
	die();
}

?>