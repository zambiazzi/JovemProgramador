<?php
class Calculadora {
    private $num1;
    private $num2;

    public function __contructor($num1, $num2) {
        $this -> num1 = $num1;
        $this -> num2 = $num2;
    }

    public function adicao($num1, $num2) {
        echo $num1 + $num2."<br>";
    }

    public function subtracao($num1, $num2) {
        echo $num1 - $num2."<br>";
    }

    public function multiplicacao($num1, $num2) {
        echo $num1 * $num2."<br>";
    }

    public function divisao($num1, $num2) {
        echo $num1 / $num2."<br>";
    }
}

$calc = new Calculadora();
$calc -> adicao(5, 5);
$calc -> subtracao(10, 5);
$calc -> multiplicacao(5, 5);
$calc -> divisao(10, 5);

?>