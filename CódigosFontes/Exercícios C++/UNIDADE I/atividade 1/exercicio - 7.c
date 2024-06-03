#include<stdio.h>
#include<stdlib.h>

void main(){
	float volume, r, PI = 3.14;
	printf("Medida do raio da esfera: ");
	scanf("%f", &r);
	volume = (4*PI*pow(r,3))/3;
	printf("O volume da esfera = %.2f", volume);
}
