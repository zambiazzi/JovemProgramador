#include <stdio.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL, "Portuguese");
	
	int num;
	
	printf("Digite um número aleatório: ");
	scanf("%d", &num);
	
	if (num > 0){
		printf("Esse número é positivo.\n");
	}
	else if (num < 0){
		printf("Esse número é negativo.\n");
	}
	else{
		printf("Esse número é igual a 0.\n");
	}
	
 return 0;
}

