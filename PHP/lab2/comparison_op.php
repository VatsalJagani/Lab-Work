<?php
$no1=2;
$no2=$no1;
$str1='2';
if($no1==$str1)
{
echo "Oye! Value is equal." . '<br>';
}

if($no1===$str1)
{
}
else
{
echo "Oye! Value is equal, but type is different" . '<br>';
var_dump($no1, $str1);

}

?>