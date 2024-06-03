#include<stdio.h>
#include<stdlib.h>
 void main(){
 	int n1, i;
 	printf("Digite um valor: ");
 	scanf("%d", &n1);
 	for(i = 1; i <= 10; i++){
 		printf(" %d * %d = %d\n", n1, i, n1*i);
	 }
 }
