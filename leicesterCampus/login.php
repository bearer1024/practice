<?php
$con = mysqli_connect("localhost:3306","root","root");
$sql = "CREATE DATABASE leicesterCampus";
if (mysql_query($con,$sql))
{
    echo "database leicesterCampus created successfully"
}
?>
