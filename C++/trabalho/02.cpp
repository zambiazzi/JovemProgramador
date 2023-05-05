#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	int num1, num2;
	
	printf("Digite um número inteiro: ");
	scanf("%d", &num1);
	
	printf("Digite outro número inteiro: ");
	scanf("%d", &num2);
	
	if (num1 > num2){
		printf("\nO número %d é o maior e %d o menor número.", num1, num2);
	}
	else if (num2 > num1){
		printf("\nO número %d é o maior e %d o menor número.", num2, num1);
	}
	else{
		printf("\nOs números são iguais.");
	}
	
	return 0;
}
