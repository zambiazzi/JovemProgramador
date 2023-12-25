<?php
class Produto {
    private $nome;
    private $preco;
    private $estoque;

    public function __construct($nome, $preco, $estoque) {
        $this -> nome = $nome;
        $this -> preco = $preco;
        $this -> estoque = $estoque;
    }

    public function comprar($quantidadeItens) {
        $this -> estoque += $quantidadeItens;
        echo "Compra realizada!<br><br>";
        echo "Pedido: ".$quantidadeItens." ".$this->nome."<br>";
    }

    public function venda($quantidadeItens) {
        $this -> estoque -= $quantidadeItens;
        echo "Venda realizada!<br><br>";
        echo "Pedido: ".$quantidadeItens." ".$this->nome."<br>";
    }

    public function getNome() {
        return $this -> nome;
    }
    public function setNome() {
        $this -> nome = $nome;
    }

    public function getPreco() {
        return $this -> preco;
    }
    public function setPreco() {
        $this -> preco = $preco;
    }

    public function getEstoque() {
        return $this -> estoque;
    }
    public function setEstoque() {
        $this -> estoque = $estoque;
    }
}

$produto1 = new Produto("Linguiça Toscana", 10, 50);
echo "Produto: ".$produto1 -> getNome()."<br>";
echo "Preço: ".$produto1 -> getPreco()."<br>";
echo "Estoque: ".$produto1 -> getEstoque()."<br><br>";
$produto1 -> comprar(4);
echo "Estoque: ".$produto1 -> getEstoque()."<br><br>";
$produto1 -> venda(2);
echo "Estoque: ".$produto1 -> getEstoque()."<br><br>";

?>