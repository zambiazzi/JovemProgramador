package pessoas;

public class Cliente extends Pessoas{
    float limiteCredito;
    
    public Cliente(String nome, int idade, float limiteCredito){
        super(nome, idade);
        this.limiteCredito = limiteCredito;
    }
    
    public void aumentarCredito(float valor){
        this.limiteCredito += valor;
    }
}
