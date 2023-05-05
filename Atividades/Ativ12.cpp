#include <stdio.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL, "Portuguese");
	
	int m[3][3], i, j, mult, c;
	
	for(i = 0; i < 3; i++){
		for(j = 0; j < 3; j++){
			printf("Digite um número inteiro linha [%d] coluna [%d]: ", i, j);
			scanf("%d", &m[i][j]);
		}
	}
	
	for(i = 0; i < 3; i++){
		for(j = 0; j < 3; j++){
			printf("\t%d", m[i][j]);
		}
	printf("\n");
	}
	
	printf("\nDigite um número inteiro para ser multiplicado: ");
	scanf("%d", &mult);
	
	for(i = 0; i < 3; i++){
		for(j = 0; j < 3; j++){	
			m[i][j] = m[i][j] * mult;
			printf("\t%d", m[i][j]);		
		}
	printf("\n");
	}
	
	return 0;
}
