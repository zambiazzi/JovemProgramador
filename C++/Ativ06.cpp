#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	int num;
	
	printf("Digite um n�mero inteiro menor que 100: ");
	scanf("%d", &num);
	
	if (num >= 101){
	printf("N�mero inv�lido.");
}
	while (num <= 100){
		printf("%d\n", num);
		num++;		
	}
	
	return 0;
}	

