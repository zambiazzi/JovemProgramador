#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	int num, c;
	
	printf("Digite um n�mero inteiro positivo: ");
	scanf("%d", &num);
	
	if (num > 0){
		for(c = 2; c < num; c += 2){
			printf("%d\n", c);
		}
	}
	else{
		printf("Valor inv�lido.\n");
	}	
	return 0;
}

