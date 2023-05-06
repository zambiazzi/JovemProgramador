package pessoas;

public class Pessoas {
    String nome;
    int idade;
    
    public Pessoas(String nome, int idade){
        this.nome = nome;
        this.idade = idade;
    }
    
    public void fazerAniversario(){
        this.idade++;
    }
    
    public static void main(String[] args) {
        Funcionario Lucas = new Funcionario("Lucas", 17, 5000.52f);
        Lucas.receberAumento(500f);
        Lucas.fazerAniversario();
        Cliente Diabo = new Cliente("Diabo", 2, 1000f);
        System.out.println("Nome: "+Diabo.nome+" Salário: "+Diabo.limiteCredito+" Idade: "+Diabo.idade);
        Diabo.aumentarCredito(500f);
        System.out.println("Limite: "+Diabo.limiteCredito);
        
    }
    
}
