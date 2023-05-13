package calculadora;

public class Calculadora {
    int num1;
    int num2;
       
    public int soma(int a, int b){
        return a + b;
    }
    
    public double soma(double a, double b, double c){
        return a + b + c; 
    }
    
    public int soma(int a, int b, int c, int d){
        return a + b + c + d;
    }


    public static void main(String[] args) {      
        int result;
        double resultD;
        
        Calculadora conta = new Calculadora();
        result = conta.soma(1, 2);
        System.out.println("O resultado é: "+result);
        
        Calculadora conta2 = new Calculadora();
        resultD = conta2.soma(3.52f, 4.21f, 5.23f);
        System.out.println("O resultado é: "+resultD);
        
        Calculadora conta3 = new Calculadora();
        result = conta3.soma(6, 7, 8, 9);
        System.out.println("O resultado é: "+result);
    }
    
}
