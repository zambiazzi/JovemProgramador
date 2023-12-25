<?php

$num = 5;
$i = 0;
$resultado = 1;

while ($num > $i) {
    echo $num." * ";
    $resultado *= $num;
    $num--;
}

echo "<br> Resultado: ".$resultado;


?>