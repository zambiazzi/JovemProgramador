#include <stdio.h>
#include <locale.h>

int calc(int num1){
	return (num1 * 1.8) + 32;
}

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	int num, result;
	
	printf("Digite uma temperatura em graus Celsius: ");
	scanf("%d", &num);
	
	result = calc(num);
	printf("%d graus Celsius é %d graus Fahrenheit.\n", num, result);
	
	return 0;
}

