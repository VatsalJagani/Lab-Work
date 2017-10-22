<?php
//Calculate 60 days in the future
//seconds * minutes * hours * days + current time
//$inTwoMonths = 60 * 60 * 24 * 60 + time();
$inTwoMin = 60 * 2 + time(); 
setcookie('lastVisit','Apurva', $inTwoMin); 
?>

