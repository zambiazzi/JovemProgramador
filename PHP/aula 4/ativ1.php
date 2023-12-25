<?php
// Categorizar faixa etária

function categorizarIdade($idade) {
    if ($idade > 0 && $idade <= 12) {
        echo "Idade: ".$idade."<br>Criança<br>";
    } else if ($idade > 12 && $idade <= 18) {
        echo "Idade: ".$idade."<br>Adolescente<br>";
    } else if ($idade > 18 && $idade <= 60) {
        echo "Idade: ".$idade."<br>Adulto<br>";
    } else if ($idade > 60 && $idade <= 120) {
        echo "Idade: ".$idade."<br>Idoso<br>";
    } else {
        echo "Número inválido";
    }
}

categorizarIdade(10);
categorizarIdade(17);
categorizarIdade(36);
categorizarIdade(82);
?>