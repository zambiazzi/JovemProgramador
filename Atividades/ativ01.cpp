#include <stdio.h>

int main() {
	float num1, num2, r;
	printf("Digite um numero: ");
	scanf("%f", &num1);
	printf("Digite outro numero: ");
	scanf("%f", &num2);
	r = (num1 + num2) / 2;
	printf("A media aritimetica e %.2f", r);	
	return 0;
}

