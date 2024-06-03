#include<stdio.h>
#include<stdlib.h>
 void main(){
 	int i, n1, soma = 0;
 	for(i = 1; i <=100; i++){
 		printf("Informe um valor: ");
 		scanf("%d", &n1);
 		soma = soma + n1;
	 }
	 printf("Soma dos valores: %d", soma);
 }
