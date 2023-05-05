#include <stdio.h>
#include <locale.h>
#include <windows.h>

void Media_aritmetica(float num1, float num2, float num3){
	float result;
	result = (num1 + num2 + num3) / 3;
	printf("A média é de: %.2f", result);
}

void Media_ponderada(float num1, float num2, float num3){
	float result;
	result = ((num1 * 2) + (num2 * 3) + (num3 * 5)) / 10;
	printf("A média é de: %.2f", result);
}

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	float n1, n2, n3;
	int op;
	
	printf("Digite a primeira nota: ");
	scanf("%f", &n1);
	printf("Digite a segunda nota: ");
	scanf("%f", &n2);
	printf("Digite a terceira nota: ");
	scanf("%f", &n3);
	system("cls");
	
	printf("Escolha o cálculo de média:\n1 - Média aritmética\n2 - Média ponderada\n");
	scanf("%d", &op);
	
	switch(op){
		case 1:
			Media_aritmetica(n1, n2, n3);
		break;
		case 2:
			Media_ponderada(n1, n2, n3);
		break;
		default:
			printf("Código inválido.");
		break;
	}
	
	return 0;
}

