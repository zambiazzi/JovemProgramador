#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	int num, c;
	
	printf("Digite um n�mero inteiro maior que 1: ");
	scanf("%d", &num);
	
	if (num < 1){
		printf("N�mero inv�lido.");
	}
	for(c = 1; c < num + 1; c++){
		printf("%d\n", c);
	}
	
	return 0;
}

