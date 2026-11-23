<?php
$name=$email=$phone=$password="";
$errors=[];
$success="";
if($_SERVER["REQUEST_METHOD"]=="POST"){
$name=trim($_POST["name"]);
if(empty($name)){
$errors[]="Name is required";
}
elseif(!preg_match("/^[a-zA-Z]+$/",$name)){
$errors[]="Name should contain only letters";
}

$email=trim($_POST["email"]);
if(empty($email)){
$errors[]="Email is required";
}
elseif(!filter_var($email,FILTER_VALIDATE_EMAIL)){
$errors[]="Invalid email format";
}
$phone=trim($_POST["phone"]);
if(!preg_match("/^[0-9]{10}$/",$phone)){
$errors[]="Phone number must contain exactly 10 digits";
}

$password=$_POST["password"];
if(strlen($password)<8){
$errors[]="Password must conatin  atleast 8 characters";
}

$confirm=$_POST["confirm"];
if($password!==$confirm){
$errors[]="Password donot match";
}
if(empty($errors)){
$success="Registration successfull!";
}
}
?>

<html>
<head>
<title>Student Registration From</title>
</head>
<body>
<h2>Student Registration From</h2>
<form method="POST" action="">
Name: <input type="text" name="name" value="<?php echo htmlspecialchars($name);?>">
<br><br>
Email: <input type="text" name="email" value="<?php echo htmlspecialchars($email);?>">
<br><br>
Phone Number: <input type="text" name="phone" value="<?php echo htmlspecialchars($phone);?>">
<br><br>
Password: <input type="password" name="password">
<br><br>
Confirm Password: <input type="password" name="confirm">
<br><br>
<input type="submit" value="Register">
<input type="reset" value="Clear">
</form>
<?php
if(!empty($errors)){
echo "<h3>Validation Errors:</h3>";
foreach($errors as $error){
echo "<p style='color:red;'>".htmlspecialchars($error)."</p>";
}
}
if(!empty($success)){
echo "<h3 style='color:green;'>".htmlspecialchars($success
)."</h3>";
}
?>
</body>
</html>
