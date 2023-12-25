<?php
class Animal {
    public function emitirSom() {
        echo "Barulho genérico";
    }
}

class Cachorro extends Animal {
    public function fazerSom() {
        echo "Auau<br>";
    }
}

class Gato extends Animal {
    public function fazerSom() {
        echo "Miau<br>";
    }
}

$meuCachorro = new Cachorro();
$meuGato = new Gato();

$meuCachorro -> fazerSom();
$meuGato -> fazerSom();
?>