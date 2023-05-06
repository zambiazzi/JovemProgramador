package pessoas;

public class Funcionario extends Pessoas{
    float salario;
    
    public Funcionario(String nome, int idade, float salario){
        super(nome, idade);
        this.salario = salario;
    }
    
    public void receberAumento(float valor){
        this.salario += valor; 
    }
}
