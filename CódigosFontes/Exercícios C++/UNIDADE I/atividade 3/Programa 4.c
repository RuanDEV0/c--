#include<stdio.h>
#include<stdlib.h>
 void main(){
 	int n1,n2,i;
 	printf("Informe o intervalo: \n");
 	printf("De: ");
 	scanf("%d", &n1);
 	printf("Ate: ");
 	scanf("%d", &n2);
 	printf("Numeros Pares: ");
 	for( i = n1; i <= n2; i++){
 		if(i%2 == 0){
 			printf("%d, ", i);
		 }
	 }
 }
