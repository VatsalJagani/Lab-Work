<?php
if( $_POST["username"] & $_POST["password"] )
{

    if(isset($_COOKIE['name']))

    {
        if($_POST["username"] == $_COOKIE['name'] & $_POST["password"] == $_COOKIE['password'])
        {
            echo "you are already loged in...";
        }
        else
        {
            echo "invalid password";
        }

    }
    else
    {
        echo "new user";
	echo "<br>".$_POST['rememberMe'] ;

        if( $_POST["rememberMe"])
        {
            $inTwoMin = 60 *2  + time();
            setcookie('name',$_POST['username'], $inTwoMin);

            setcookie('password',$_POST["password"], $inTwoMin);
        }
        else
        {
            $inOneMin = 60 * 1 + time();
            setcookie('name',$_POST['username'], $inOneMin);
            setcookie('password',$_POST["password"], $inOneMin);
        }
    }

    exit();
}
else
{
    echo "check username & password";
    exit();
}
?>
