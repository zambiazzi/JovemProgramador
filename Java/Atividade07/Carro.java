package carro;

public class Carro {
    String marca;
    String modelo;
    int ano;
    
    public Carro(String marca, String modelo, int ano){
        this.marca = marca;
        this.modelo = modelo;
        this.ano = ano;
    }
    
    public void acelerar(){
        System.out.println("O carro da marca "+marca+", modelo "+modelo+" do ano "+ano+" está acelerando a 100km/h...");
    }

    public static void main(String[] args) {
        
        Carro carro1 = new Carro("Fiat", "Uno", 2006);
        carro1.acelerar();
        
        Carro carro2 = new Esportivo("Porsche", "911", 1963);
        carro2.acelerar();
        
        Carro carro3 = new OffRoad("Ranger", "Ford", 2020);
        carro3.acelerar();

    }
    
}
