#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	float kg, imc, alt;
	
	printf("Digite sua altura: ");
	scanf("%f", &alt);
	
	printf("Digite seu peso: ");
	scanf("%f", &kg);
	
	imc = kg / (alt * alt);
	
	if (imc < 18.5){
		printf("IMC: %.2f.\n", imc);
		printf("Abaixo do peso.");
	}
	else if ((imc >= 18.5) and (imc <= 24.9)){
		printf("IMC: %.2f.\n", imc);
		printf("Peso normal.");
	}
	else if ((imc >= 25) and (imc <= 29.9)){
		printf("IMC: %.2f.\n", imc);
		printf("Sobrepeso.");
	}
	else if ((imc >= 30) and (imc <= 34.9)){
		printf("IMC: %.2f.\n", imc);
		printf("Obesidade grau 1.");
	}
	else if ((imc >= 35) and (imc <= 39.9)){
		printf("IMC: %.2f.\n", imc);
		printf("Obesidade grau 2.");
	}
	else if (imc >= 40){
		printf("IMC: %.2f.\n", imc);
		printf("Obesidade grau 3 (mórbida).");
	}
	else{
		printf("Valor inválido.");
	}
	
	return 0;
}

