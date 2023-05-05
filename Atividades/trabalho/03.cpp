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
		while(num2 < num1 - 1){
			num2++;
			printf("%d\n", num2);
		}
	}
	else if (num1 < num2){
		while(num1 < num2 - 1){
			num1++;
			printf("%d\n", num1);
		}
	}
	else{
		printf("\nNão existe valores entre esses dois números pois eles são iguais.\n");
	}
	
	return 0;
}
