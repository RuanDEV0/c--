#include<stdio.h>
float calculoDoelemento(int a){
	int i;
	float n = 6, d = 10, resultado;
	for(i = 1; i < a; i++){
		n += 6;
		d += 5;
	}
	resultado = n / d;
	return resultado;
}
void main(){
	int n;
	printf("Informe um elemento da serie: ");
	scanf("%d", &n);
	printf("Resultado = %.2f", calculoDoelemento(n));
}
