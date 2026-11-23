<html>
<body>
<form method="get">
<h1>Check Odd Or Even</h1>
<h4>Number:<input type="text" name="num">
<input type="submit" value="check"></h4>
</form>
<?php
if(isset($_GET['num'])){
$num=$_GET['num'];
if ($num % 2 == 0)
{
echo "$num is an even number";
}
else
{
echo "$num is an odd number";
}
}
?>
</body>
</html>
