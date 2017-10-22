<?php

echo '<br>'. "Hello" . '<br>';
session_start();

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
?>
