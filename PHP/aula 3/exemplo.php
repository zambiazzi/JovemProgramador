<?php
class Carros {
    private $marca;
    private $ano;
    private $cor;
    private $velAtual;

    public function __construct($marca, $ano, $cor) {
        $this -> marca = $marca;
        $this -> ano = $ano;
        $this -> cor = $cor;
    }

    public function acelerar($velocidade) {
        $this -> velAtual += $velocidade;
        echo "Vrummmmmmm! Velocidade:".$this -> velAtual."km";
    }
    
    public function getMarca() {
        return $this -> marca;
    }
    public function setMarca($marca) {
        $this -> marca = $marca;
    }

    public function getAno() {
        return $this -> ano;
    }
    public function setAno($ano) {
        $this -> ano = $ano;
    }

    public function getCor() {
        return $this -> cor;
    }
    public function setCor($cor) {
        $this -> cor = $cor;
    }

    public function getVelAtual() {
        return $this -> velAtual;
    }
    public function setVelAtual($velAtual) {
        $this -> velAtual = $velAtual;
    }
    
}

class CarroEsportivo extends Carros {
    private $tipoDeTurbo;

    public function __construct($marca, $ano, $cor, $tipoDeTurbo) {
        parent::__construct($marca, $ano, $cor, $tipoDeTurbo);
        $this -> tipoDeTurbo = $tipoDeTurbo;
    }

    public function ativarTurbo() {
        $this -> acelerar(100);

        echo "pssss Nitro ativido".$this -> tipoDeTurbo." ativado<br>";
    }

    public function getTipoDeTurbo() {
        return $this -> tipoDeTurbo;
    }
    public function setTipoDeTurbo($tipoDeTurbo) {
        $this -> tipoDeTurbo = $tipoDeTurbo;
    }
    
}

$Carro1 = new Carros("Volkswagen", 2007, "Branco");
$Carro1 -> setMarca("Fiat");
echo "Marca: " . $Carro1 -> getMarca() . "<br>";
echo "Ano: " . $Carro1 -> getAno() . "<br>";
echo "Cor: " . $Carro1 -> getCor() . "<br>";



$MeuCarro = new CarroEsportivo("Chevrolet", 2002, "Preto");
echo "Marca: " . $Carro1 -> getMarca() . "<br>";
echo "Ano: " . $Carro1 -> getAno() . "<br>";
echo "Cor: " . $Carro1 -> getCor() . "<br>";


?>