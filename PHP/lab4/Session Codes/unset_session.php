<?php
session_start();
// Use $HTTP_SESSION_VARS with PHP 4.0.6 or less
echo $_SESSION['count'];
unset($_SESSION['ct']);
//echo $_SESSION['count'];
?>