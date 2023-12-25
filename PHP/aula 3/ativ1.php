<?php
class Pessoa {
    private $nome;
    private $idade;

    public function __construct($nome, $idade) {
        $this -> nome = $nome;
        $this -> idade = $idade;
    }

    public function getNome() {
        return $this -> nome;
    }
    public function setNome() {
        $this -> nome = $nome;
    }

    public function getIdade() {
        return $this -> idade;
    }
    public function setIdade() {
        $this -> idade = $idade;
    }
}

    $pessoa1 = new Pessoa("Lucas", 17);
    echo "Nome: ".$pessoa1 -> getNome()."<br>";
    echo "Idade: ".$pessoa1 -> getIdade()."<br>";
?>