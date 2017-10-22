<?php
$arr = array(5 => 1, 12 => 2);

print_r($arr);
echo'<br>';

$arr[] = 56;    // This is the same as $arr[13] = 56;
                // at this point of the script
print_r($arr);
echo'<br>';

$arr["x"] = 42; // This adds a new element to
                // the array with key "x"
 print_r($arr);               
echo'<br>';

unset($arr[5]); // This removes the element from the array
print_r($arr);
echo'<br>';

unset($arr);    // This deletes the whole array
print_r($arr);
echo'<br>';
?>