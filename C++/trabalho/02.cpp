#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	int num1, num2;
	
	printf("Digite um n�mero inteiro: ");
	scanf("%d", &num1);
	
	printf("Digite outro n�mero inteiro: ");
	scanf("%d", &num2);
	
	if (num1 > num2){
		printf("\nO n�mero %d � o maior e %d o menor n�mero.", num1, num2);
	}
	else if (num2 > num1){
		printf("\nO n�mero %d � o maior e %d o menor n�mero.", num2, num1);
	}
	else{
		printf("\nOs n�meros s�o iguais.");
	}
	
	return 0;
}
