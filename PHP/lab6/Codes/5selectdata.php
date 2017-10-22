<?php
try{
	$dbhandler = new PDO('mysql:host=127.0.0.1;dbname=user1','feedback','feedback');
	echo "Connected...<br/>";
	$dbhandler->setAttribute(PDO::ATTR_ERRMODE,PDO::ERRMODE_EXCEPTION);
	$query=$dbhandler->query('select * from guestbook');
		while($r=$query->fetch()){
			//echo specific attributes
			echo $r['message'], '<br/>';
			//echo all data in both format: numeric and associative
			echo '<pre>',print_r($r),'</pre>';
			//echo data in associative format
			
			//echo data in numeric format
		}
}
catch(PDOException $e){
	echo $e->getMessage();
	die();
}

?>