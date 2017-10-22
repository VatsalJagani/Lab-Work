<?php

echo "<b>". "Hello" . "</b>";
session_start();
// Use $HTTP_SESSION_VARS with PHP 4.0.6 or less
if (!isset($_SESSION['count'])) {
    $_SESSION['count'] = 0;
} else {
    $_SESSION['count']++;
}
echo $_SESSION['count'] . '<br>';
echo "Session Name: " . session_name() . '<br>';
echo "Session ID: " . session_id() . '<br>';
echo "Session Module Name: " . session_module_name() . '<br>';
echo "Session Save Path: " . session_save_path() . '<br>';
echo "Encoded Session: " . session_encode() . '<br>' . '<br>';

$_SESSION['ct'] = 0;
?>