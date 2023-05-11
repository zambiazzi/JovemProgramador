package animall;

public class Animall {
    String nome;
    float peso;
    String genero;
    
    public Animall(String nome, float peso, String genero){
        this.nome = nome;
        this.peso = peso;
        this.genero = genero;
    }
    
    public void nascer(){
        System.out.println("O animal "+nome+" nasceu!");
    }
    
    public static void main(String[] args) {
        
        Carnivoro Leao = new Carnivoro("Leao", 210.5f, "macho");
        Leao.nascer();
        Leao.fomeCarnivora(true);
        
        Herbivoro Vaca = new Herbivoro("Vaca", 152.8f, "fêmea");
        Vaca.nascer();
        Vaca.fomeHerbivora(false);

        
    }
    
}
