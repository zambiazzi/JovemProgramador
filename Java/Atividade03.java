package atividade03;

import java.util.Scanner;

public class Atividade03 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        
        int Num = 0;
        System.out.print("Digite um numero positivo: ");
        int NumD = input.nextInt();
        
        while (Num < NumD){
            Num++;
            System.out.println(Num);
        }
    input.close();
    }
}
