#include <stdio.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL, "Portuguese");
	
	float nota1, nota2, nota3, media;
	
		printf("Digite a primeira nota: ");
		scanf("%f", &nota1);
	
		printf("Digite a segunda nota: ");
		scanf("%f", &nota2);
		
		printf("Digite a terceira nota: ");
		scanf("%f", &nota3);
			
		media = (nota1 + nota2 + nota3) / 3;
				
		if(media >= 7){
		printf("Aprovado.");
		}
		else if ((media >= 5) and (media < 7)){
			printf("Recupera��o.");
		}
		else{
			printf("Reprovado.");
		}
	
	return 0;	
}
