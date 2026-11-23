<html>
<body>
<h2>Electricity Bill Calculator</h2>
<form method="post">
Enter units consumed:<input type="number" name="units" min="0" required>
<input type="submit" name="submit" value="Calculate Bill">
</form>
<?php
if(isset($_POST['submit'])){
$units=(int)$_POST['units'];
$bill=0;
if($units<=100){
$bill=$units*1.50;
}
elseif($units<=200){
$bill=(100*1.50)+(($units-100)*2.50);
}
else{
$bill=(100*1.50)+(100*2.50)+(($units-200)*4.00);
}
echo "<h3>Units Consumed: $units</h3>";
echo "<h3>Electricity Bill:Rs.".number_format($bill,2)."</h3>";
}
?>
</body>
</html>
