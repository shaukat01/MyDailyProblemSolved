<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
</head>

<style>
    table{
        border:1px solid black;
        width:450px;
    }
    th,td{
        border: 1px solid black;
    }

</style>

<body>
    
<form action='/practice/Ques_22.php' method='POST'>
    <label for='empno'>EmpNumn</label>
    <input type='number' id='empno' name='empno'>
    <br> <br>
    <label for='ename'>EmpName</label>
    <input type='text' id='ename' name='ename'>
    <br> <br>
    <label for='esal'>EmpSal</label>
    <input type='number' id='esal' name='esal'>
    <button type='submit'>Submit Details</button>
</form>
 <?php
$conn=mysqli_connect('localhost','root','','shaukat');
if($conn)
{
  echo 'connection extablished';
  if($_SERVER['REQUEST_METHOD']=='POST'){
    $empno=$_POST['empno'];
    $ename=$_POST['ename'];
    $esal=$_POST['esal'];
    $sql="insert into employee values('$empno','$ename','$esal')";
    $result=mysqli_query($conn,$sql);

    if($result){
        echo "Inserted Successfully";
        echo "<table>
        <tr>
    <th>EmpNo</th>
    <th>EmpName</th>
    <th>EmpSal</th>
    </tr>
    <tr>
    <td>$empno</td>
    <td>$ename</td>
    <td>$esal</td>
    </tr>

        echo </table>";
    }

  }
}
else{
    echo 'connection failed';
}

?>
</body>
</html>