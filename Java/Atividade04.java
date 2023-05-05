package pessoa;

public class Pessoa {
    String Nome;
    String Genero;
    int    Idade;
    float  Altura;
    float  Peso;
    
    public Pessoa(String Nome, String Genero, int Idade, float Altura, float Peso){
        this.Nome = Nome;
        this.Genero = Genero;
        this.Idade = Idade;
        this.Altura = Altura;
        this.Peso = Peso;
    }
    
    public void andar(){
        System.out.println("A pessoa chamada "+Nome+" do genero "+Genero+", de idade "+Idade+" com "+Altura+"m de altura e "+Peso+"kg de peso esta andando...");
    }
    
    public void correr(){
         System.out.println("A pessoa chamada "+Nome+" do genero "+Genero+", de idade "+Idade+" com "+Altura+"m de altura e "+Peso+"kg de peso esta correndo...");
    }
    
    public void pular(){
        System.out.println("A pessoa chamada "+Nome+" do genero "+Genero+", de idade "+Idade+" com "+Altura+"m de altura e "+Peso+"kg de peso esta pulando...");
    }
 
    public static void main(String[] args) {
        
       Pessoa Pessoa1 = new Pessoa("Lucas", "Masculino", 17, 1.87f, 72);
       Pessoa Pessoa2 = new Pessoa("Jesus", "Masculino", 2023, 1.66f, 89);
       Pessoa Pessoa3 = new Pessoa("Maria", "Feminino", 16, 1.62f, 56);
       
       Pessoa1.andar();
       Pessoa2.pular();
       Pessoa3.correr();
    }
    
}
