package atividade2;

import java.util.Scanner;

public class Atividade2 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        
        System.out.print("Digite um numero inteiro: ");
        int Num = input.nextInt();
        
        if (Num > 10){
            System.out.println("O numero digitado e maior que 10");
        }
        else if (Num < 10){
            System.out.println("O numero digitado e menor que 10");
        }
        else{
            System.out.println("O numero e igual a 10");
        }
        input.close();
    } 
}
