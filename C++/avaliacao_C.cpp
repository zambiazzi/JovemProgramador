#include <stdio.h>
#include <locale.h>
#include <windows.h>

char menu()	{
		int op;
	
		printf("Escolha uma op��o para o array:\n"
			"1- Cadastrar 10 n�meros inteiros\n" 
			"2- Mostrar os valores\n"
			"3- Limpar o array\n"
			"4- Mover os n�meros para a direita\n"
			"5- Mover os n�meros para a esquerda\n"
			"6- Inverter a ordem dos n�meros\n"
			"7- Mostrar o valor de uma posi��o espec�fica\n"
			"8- Sair do programa\n");
			scanf("%d", &op);
		return op;
}
	
///Op��o 1
void opcao1(int array[], int tamanho){
	
	int c, arrayAux[10];
	
	system("cls");
	for(c = 0; c < tamanho; c++){
		arrayAux[c] = array[c];
	}
	
	for(c = 0; c < tamanho; c++){
		printf("Digite um valor na casa [%d]: ", c);
		scanf("%d", &array[c]);
	}
	system("cls");
}
	
///Op��o 2
void opcao2(int array[], int tamanho){
	
	int c;
	
	system("cls");
	printf("Valores atribuidos:\n");
	for(c = 0; c < tamanho; c++){
	printf("%d ", array[c]);
	}
	printf("\n \n");
}

///Op��o 3
void opcao3(int array[], int tamanho){
	
	int c, arrayAux[10];
	
	system("cls");
	for(c = 0; c < tamanho; c++){
		arrayAux[c] = array[c];
		array[c] = 0;
	}
}

///Op��o 4
void opcao4(int array[], int tamanho){
	
	int c, c2, arrayAux[10], arrayAux2[10];
	
	system("cls");
	
	for(c = 0; c < tamanho; c++){
	arrayAux[c] = array[c];
	}
	
	array[0] = arrayAux[9];
	
	for(c = 1, c2 = 0; c < 10; c++, c2++){
		array[c] = arrayAux[c2];
	}
	
	printf("Valores atribuidos:\n");
	for(c = 0; c < 10; c++){
		printf("%d ", array[c]);
	}
	printf("\n \n");
}

///Op��o 5
void opcao5(int array[], int tamanho){
	
	int c, c2, arrayAux[10], arrayAux2[10];
	
	system("cls");
	
	for(c = 0; c < tamanho; c++){
	arrayAux[c] = array[c];
	}
	
	array[9] = arrayAux[0];
	
	for(c = 0, c2 = 1; c < 9; c++, c2++){
		array[c] = arrayAux[c2];
	}
	
	printf("Valores atribuidos:\n");
	for(c = 0; c < 10; c++){
		printf("%d ", array[c]);
	}
	printf("\n \n");
}

///Op��o 6
void opcao6(int array[], int tamanho){
	
	int c, arrayAux[10];
	
	system("cls");
	
	for(c = 0; c < 10; c++){
		arrayAux[c] = array[c];		
	}
	
	for(c = 0; c < 10; c++){
	array[c] = arrayAux[9 - c];
	}

	printf("Valores atribuidos:\n");
	for(c = 0; c < 10; c++){
		printf("%d ", array[c]);
	}
	printf("\n \n");
}

///Op��o 7
void opcao7(int array[], int tamanho){
	
	int opcao;
	
	system("cls");
	
	printf("Digite o n�mero da posi��o (0 a 9): ");
	scanf("%d", &opcao);
	
	if((opcao < 0) or (opcao > 9)){
		printf("Posi��o inv�lida.");
	}
	else{
		printf("Valor da casa [%d]: %d", opcao, array[opcao]);
	}
	printf("\n \n");
}

///Op��o 8
void opcao8(int array[], int tamanho){
}

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int op;
	int array[10] = {0,0,0,0,0,0,0,0,0,0};
	
	do {
		op = menu();
		
		switch(op){
			case 1:
				opcao1(array, 10);
			break;
			
			case 2:
				opcao2(array, 10);
			break;
			
			case 3:
				opcao3(array, 10);
			break;
			
			case 4:
				opcao4(array, 10);
			break;
			
			case 5:
				opcao5(array, 10);
			break;
			
			case 6:
				opcao6(array, 10);
			break;
			
			case 7:
				opcao7(array, 10);
			break;
			
			case 8:
				opcao8(array, 10);
			break;
			
			default:
				system("cls");
				printf("Op��o inv�lida.");
				printf("\n \n");
			break;
		}
		
	} while(op != 8);
	
	return 0;
}
