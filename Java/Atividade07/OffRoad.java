package carro;

public class OffRoad extends Carro {
    
    public OffRoad(String marca, String modelo, int ano){
        super(marca, modelo, ano);
    }
    
    public void acelerar(){
        System.out.println("O carro da marca "+marca+", modelo "+modelo+" do ano "+ano+" está subindo a montanha...");
    }
}
