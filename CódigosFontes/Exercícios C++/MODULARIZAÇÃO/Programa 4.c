#include<stdio.h>
void tabuada_multiplicacao(int a){
	int i;
	for(i = 1; i <= 10; i++){
		printf("%d X %d = %d \n", i, a, i*a);
	}
}
void main(){
	int n1;
	printf("Informe um valor: ");
	scanf("%d", &n1);
	tabuada_multiplicacao(n1);
}
