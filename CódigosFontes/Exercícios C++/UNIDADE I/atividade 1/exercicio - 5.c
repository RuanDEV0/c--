#include<stdio.h>
#include<stdlib.h>
void main(){
	int base, altura, area;
	printf("Calcular a area do quadrado: \n");
	printf("Medida da base: ");
	scanf("%d", & base);
	printf("Medida da altura: ");
	scanf("%d", &altura);
	area = base*altura;
	printf("A area do quadrado = %d", area);
	
}
