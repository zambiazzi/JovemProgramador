#include <stdio.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL, "Portuguese");
	
	int num[4], x[4], c, d;
	
	for(c = 0; c < 5; c++){
		num[c] = c + 1;	
	}
	
	for(c = 0, d = 4; c < 5 and d >= 0; c++, d--){
		x[c] = num[d];
		printf("%d\n", x[c]);
	}
			
	return 0;
}

