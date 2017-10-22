<?php
if(isset($_COOKIE['lastVisit']))
	{$visit = $_COOKIE['lastVisit'];
	echo "Your Cookie data is - ". $visit;}
else
	echo "You've got some stale cookies!";

?>