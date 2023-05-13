package carro;

public class Esportivo extends Carro{
    
    public Esportivo(String marca, String modelo, int ano){
        super(marca, modelo, ano);
    }
    
    public void acelerar(){
        System.out.println("O carro da marca "+marca+", modelo "+modelo+" do ano "+ano+" está acelerando a 200km/h...");
    }
    
}
