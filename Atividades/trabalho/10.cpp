#include <stdio.h>
#include <locale.h>
#include <windows.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	int escolha;
	int c = 1;
	char nome[5][100];
	
	for(c = 1; c <= 5; c++){
		printf("Digite o item %d: ", c);
		scanf("%s", &nome[c]);
	}
	
	system("cls");
	printf("Selecione uma opção:\n");
	for(c = 1; c <= 5; c++){
		printf("%d - %s\n", c, nome[c]);
	}
	
	scanf("\n%d", &escolha);
	
	switch(escolha){
		case 1:
			printf("\nItem selecionado: %s", nome[1]);
		break;
		case 2:
			printf("\nItem selecionado: %s", nome[2]);
		break;
		case 3:
			printf("\nItem selecionado: %s", nome[3]);
		break;
		case 4:
			printf("\nItem selecionado: %s", nome[4]);
		break;
		case 5:
			printf("\nItem selecionado: %s", nome[5]);
		break;
		default:
			printf("\nValor inválido.");
		break;
	}
		
	return 0;
}
