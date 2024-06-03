#include<stdio.h>
#include<stdlib.h>
void main(){
	float PI = 3.14, r, area;
	printf("Digite o valo do raio: ");
	scanf("%f", &r);
	area = PI*r*r;
	printf("Area da circunferencia = %.2f", area);
}
