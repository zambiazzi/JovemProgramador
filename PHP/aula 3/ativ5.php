<?php
class Animal {
    public function emitirSom() {
        echo "Barulho**";
    }
}

class Cachorro extends Animal {
    public function emitirSom() {
        echo "Au au<br>";
    }
}

class Gato extends Animal {
    public function emitirSom() {
        echo "Miau miau<br>";
    }
}

$gato = new Gato();
$cachorro = new Cachorro();

$gato -> emitirSom();
$cachorro -> emitirSom();
?>