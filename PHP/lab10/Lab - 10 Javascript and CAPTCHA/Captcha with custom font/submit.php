<?php
session_start();

if ($_POST['vercode1'] != $_SESSION['vercode'] OR $_SESSION['vercode']=='')  {
     echo  '<strong>Incorrect verification code.</strong>';
} else {
     // add form data processing code here
     echo  '<strong>Verification successful.</strong>';
};
echo $_SESSION['vercode'];
echo $_POST['vercode1'];
?>