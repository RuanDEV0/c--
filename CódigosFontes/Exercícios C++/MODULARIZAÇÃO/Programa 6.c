#include<stdio.h>
void somacem(int *a){
	*a = *a + 100;
}
void main(){
	int n;
	printf("Informe um valor: ");
	scanf("%d", &n);
	somacem(&n);
	printf("Resultado = %d", n);
}
