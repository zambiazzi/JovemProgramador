package animall;

public class Carnivoro extends Animall{  
  
    public Carnivoro(String nome, float peso, String genero){
        super(nome, peso, genero);
    }
   
    public void fomeCarnivora(boolean valor){     
        if (valor){
            System.out.println("O "+nome+" de peso "+peso+" e genero "+genero+" esta comendo carne...");
        }
        else{
            System.out.println("O "+nome+" de peso "+peso+" e genero "+genero+" esta sem fome...");
        }                
    }
}
