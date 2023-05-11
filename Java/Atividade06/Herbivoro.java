package animall;

public class Herbivoro extends Animall{
    
    public Herbivoro(String nome, float peso, String genero){
        super(nome, peso, genero);
    }
    
    public void fomeHerbivora(boolean valor){
        if (valor){
            System.out.println("O "+nome+" de peso "+peso+" e genero "+genero+" esta comendo plantas...");
        }
        else{
            System.out.println("O "+nome+" de peso "+peso+" e genero "+genero+" esta sem fome...");
        }                         
    }
}
