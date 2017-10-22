<?php
try{
	$dbhandler = new PDO('mysql:host=127.0.0.1;dbname=student','student','student');
	echo "Connected...<br/>";
	$dbhandler->setAttribute(PDO::ATTR_ERRMODE,PDO::ERRMODE_EXCEPTION);
	$query=$dbhandler->query('select * from guestbook47');
	$query->setFetchMode(PDO::FETCH_CLASS,'GuestbookEntry');
		while($r=$query->fetch()){
			
			//echo data into class
			echo '<pre>',print_r($r),'</pre>';
		}
}
catch(PDOException $e){
	echo $e->getMessage();
	die();
}

class GuestbookEntry { 
	public $name, $message, $posted, $entry;
	
	public function __construct(){
		$this->entry="{$this->name} posted: {$this->message}";
	}
}

?>
