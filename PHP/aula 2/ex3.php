<?php

function celsiusParaFahrenheit($temp) {
    $conversao = ($temp * 9 / 5) + 32;
    echo $conversao."<br>";
}

function fahrenheitParaCelsius($temp) {
    $conversao = ($temp - 32) * 5 / 9;
    echo $conversao;
}

celsiusParaFahrenheit(100);
fahrenheitParaCelsius(100);
?>