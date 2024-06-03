#include<stdio.h>
int identificar(int a){
	int valor;
	if(a>0){
		valor = 1;
		return valor;
	}else{
		valor = 0;
		return valor;
	}
}
void main(){
	int n1;
	printf("Informe um valor: ");
	scanf("%d", &n1);
	printf("%d", identificar(n1));
}
