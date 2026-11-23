<html>
<body>
<h1>Factorial</h1>
<form method="post">
<h3>Number: <input type="number" name="num" min="0" required>
<input type="submit" value="submit"></h3>
</form><br>
<?php
if(isset($_POST['num'])){
$num=$_POST['num'];
$f=1;
if($num<0){
echo "Factorial is not defined for negative numbers";
}
else{
for($i=1;$i<=$num;$i++){
$f=$f*$i;
}
}
echo "Factorial of $num is $f";
}    
?>
</body>
</html>
