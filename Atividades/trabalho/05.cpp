#include <stdio.h>
#include <locale.h>
#include <windows.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	int x[10];
	int c = 0;
	
	while (c < 10){
		printf("Digite um número: ");
		scanf("%d", &x[c]);
		c++;
		system("cls");
	}
	
	for(c = 0; c <= 9; c++){
		printf("%d  ", x[c]);
	}
	
	return 0;
}
