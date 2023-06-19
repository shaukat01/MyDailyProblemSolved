<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>

    <style>
 .chess{
        display: flex;
        width: 450px;
        border:1px solid red;
        margin: 100px;
        margin-left: 400px;
        }
 .white{
        display: flex;
        height: 50px;
        width: 50px;
        background-color: white;
        }
 .black{
       display:flex;
       height: 50px;
        width: 50px;
        background-color: black;
        }
    </style>
    
</head>
<body>
    
<div class="chess">
    <?php
     for($i=0;$i<=8;$i++){
        echo "<div>";
         for($j=0;$j<=8;$j++){
           if(($i+$j)%2==0){
            echo "<div class='white'></div>";
           }
           else{
           echo "<div class='black'></div>";
           }
        }
        echo "</div>";
     }
    ?>
    
    </div>
    
</body>
</html>


