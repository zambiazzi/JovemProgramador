<?php
function maiorNumero($array) {
    $auxiliar = max($array);
    echo $auxiliar;
}

$numeros = array(1, 42, 8);
maiorNumero($numeros);

?>