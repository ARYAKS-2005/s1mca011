<?php
$students=array("Anu","Rahul","Meera","Arun","Divya");
echo "<h3>Original Student Names:</h3>";
print_r($students);
sort($students);
echo "<br><br><h3>After sort() - Ascending Order:</h3>";
print_r($students);

asort($students);
echo "<br><br><h3>After asort() - Ascending order:</h3>";
print_r($students);

arsort($students);
echo "<br><br><h3>After arsort() - Descending order:</h3>";
print_r($students);
?>

