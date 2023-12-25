<?php
function areaRetangulo($b, $a) {
    $area = $b * $a;
    echo $area."cm<br>";
}

function areaCirculo($r){
    $area = 3.14 * ($r ** 2);
    echo $area."cm<br>";
}

function areaTriangulo($b, $a){
    $area = ($b * $a) / 2;
    echo $area."cm<br>";
}

areaRetangulo(100, 50);
areaCirculo(100);
areaTriangulo(50, 100);
?>