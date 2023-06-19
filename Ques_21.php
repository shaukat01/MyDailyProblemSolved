<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>

<style>
    body{
   border: 1px solid black;
   width:450px;
    }
th,tr{
    border:1px solid black;
    padding:10px;
}

</style>

</head>
<body>
      
<form action='/practice/Ques_21.php'  method='POST'>
    <label for="empno">Enter empno</label>
    <input type="number" id="empno" name="empno">
    <button type="submit">Get Details: </button>
</form>

<?php
$conn=mysqli_connect('localhost','root','','shaukat');
 if($conn){
    //  echo "Connection Established";
        If($_SERVER['REQUEST_METHOD']=='POST'){
            $empno=$_POST['empno']; 
            $sql="select * from employee where $empno='empno' ";
            $result=mysqli_query($conn,$sql);
            $row=mysqli_fetch_assoc($result);
            
            $ename=$row['ename'];
            $esal=$row['esal'];

            if($row){
                echo "<table>
            <tr>
             <th>EmpNum</th>
             <th>EmpName</th>
             <th>EmpSal</th>
            </tr>
            <tr>
            <td>$empno</td>
            <td>$ename</td>
            <td>$esal</td>
        </tr>

             </table>";
            }

        }
 }
 else{
    echo "Connection Failed";
 }

?>

</body>
</html>