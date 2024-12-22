#include <stdio.h>


int main(){
	
	double valor, grama, tonelada;
	
	printf("Digite um valor em quilograma para conversao: ");
	scanf("%lf", &valor);
	
	tonelada = valor / 1000;
    grama = valor * 1000;


	
	printf(" O valor em toneladas eh: %lf\n", tonelada);
    printf(" O valor em gramas eh: %lf\n", grama);
	
}
