#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	int idade;
	
	printf("Digite sua idade: ");
	scanf("%d", &idade);
	
	if (idade >= 18){
		printf("Voc� j� � maior de idade.");
	}
	else{
		printf("Voc� ainda n�o � maior de idade.");
	}
	
	return 0;
}

