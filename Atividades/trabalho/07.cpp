#include <stdio.h>
#include <locale.h>
#include <windows.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	int idade, c;
	
	printf("Digite sua idade: ");
	scanf("%d", &idade);
	
	if (idade >= 18){
		printf("Voc� � maior de idade.\n");
	}
	else if (idade < 18){
		while(c < 18){
			printf("Digite sua idade: ");
			scanf("%d", &c);
		}
	}
	else{
		printf("N�mero inv�lido.");
	}
	return 0;
}
