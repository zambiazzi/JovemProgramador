<?php
class Estudante {
    private $nome;
    public $nota1;
    public $nota2;

    public function __construct($nome, $nota1, $nota2) {
        $this -> nome = $nome;
        $this -> nota1 = $nota1;
        $this -> nota2 = $nota2;
    }

    public function calcularMedia() {
        $media = ($this -> nota1 + $this -> nota2) / 2;
        if ($media >= 6) {
            echo "O aluno ".$this -> nome." está aprovado!<br>"; 
            echo "Média do aluno: ".$media;
        }
    }

    public function getNome() {
        return $this -> nome;
    }
    public function setNome() {
        $this -> nome = $nome;
    }
}

$estudante1 = new Estudante("Lucas", 8, 8);
$estudante1 -> calcularMedia();
?>