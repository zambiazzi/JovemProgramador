#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	int num, c;
	
	printf("Digite um número inteiro positivo: ");
	scanf("%d", &num);
	
	if (num > 0){
		for(c = 2; c < num; c += 2){
			printf("%d\n", c);
		}
	}
	else{
		printf("Valor inválido.\n");
	}	
	return 0;
}

