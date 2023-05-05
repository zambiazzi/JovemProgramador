#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	int num;
	
	printf("Digite um número inteiro menor que 100: ");
	scanf("%d", &num);
	
	if (num >= 101){
	printf("Número inválido.");
}
	while (num <= 100){
		printf("%d\n", num);
		num++;		
	}
	
	return 0;
}	

