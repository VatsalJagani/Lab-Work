<?php
// Lets try and reverse the order of the day and month in a date 
// string. Notice how we can reference the two groups directly 
// by index (ie. $1 and $2).
$regex = "/([a-zA-Z]+) (\d+)/";
$new_string = preg_replace($regex, "$2 of $1", "June 24");

// The string returned is either the same input string if the 
// regex does not match, or the transformed string.

// This prints "24 of June"
echo $new_string;
?>