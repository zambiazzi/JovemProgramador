#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	int num, m;
	int c = 0;
	
	printf("Digite um núnero inteiro: ");
	scanf("%d", &num);
	
	while(c < 10){
		c++;
		m = c * num;
		printf("\n%d x %d = %d", num, c, m);
	}
	
	return 0;
}

