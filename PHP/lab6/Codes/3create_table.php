<?php
try{
	$dbhandler = new PDO('mysql:host=127.0.0.1;dbname=project_db','root','');
	echo "Connected...<br/>";
	$dbhandler->setAttribute(PDO::ATTR_ERRMODE,PDO::ERRMODE_EXCEPTION);
/*	$sql="create table projects (
		project_id INT(6) UNSIGNED AUTO_INCREMENT PRIMARY KEY, 
        definition VARCHAR(25) NOT NULL,
        description text(50),
        enable INT(1),
	selected INT(1)
		)";		*/


/*	$sql="create table groups (
		leader INT(6) UNSIGNED PRIMARY KEY,
	mem1 INT(6),
	mem2 INT(6),
	mem3 INT(6)
		)";	*/

/*	$sql="create table faculty (
		faculty_id INT(6) UNSIGNED PRIMARY KEY,
	password VARCHAR(15),
	admin INT(1),
	enable INT(1)
		)";	*/




/*	$sql="create table students (
		student_id INT(6) UNSIGNED PRIMARY KEY,
	password VARCHAR(15), 
        first_name VARCHAR(15),
	last_name VARCHAR(15),
	participate INT(1),
        leader INT(6),
	allocated INT(1)
		)";	*/		// add cpi manually
/*
$abc=111;
$sql='create table p_'.$abc.'(no INT(5) UNSIGNED UNIQUE AUTO_INCREMENT, project_id INT(6) UNSIGNED UNIQUE)';
*/
	
	$query=$dbhandler->query($sql);
	echo "Table is created successfully";
		
		
}
catch(PDOException $e){
	echo $e->getMessage();
	die();
}

?>