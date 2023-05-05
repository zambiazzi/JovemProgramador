#include <stdio.h>
#include <locale.h>

float centimetros(float num){
	return num * 100;
}	

float polegadas(float num){
	return num * 39.37;
}

float pes(float num){
	return num * 3.28;
}

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	float m;
	
	printf("Digite um valor em metros: ");
	scanf("%f", &m);

	printf("\nCentímetros: %.2f\nPolegadas: %.2f\nPés: %.2f\n", centimetros(m), polegadas(m), pes(m));
	
	return 0;	
}
