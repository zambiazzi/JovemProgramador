package atividade;

import java.util.Scanner;

public class Atividade {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        
        System.out.print("Digite seu nome: ");
        String Nome = input.nextLine();
        System.out.print("Digite sua idade: ");
        int Idade = input.nextInt();
               
        System.out.println("Seu nome e "+Nome+" e voce tem "+Idade+" anos.");
        input.close();
    }  
}

// Programa onde se utiliza o Input
