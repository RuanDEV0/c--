#include<stdio.h>
#include<stdlib.h>
void main (){
	int n1,n2,n3;
	printf("Digite o primeiro numero: ");
	scanf("%d", &n1);
	printf("Digite o segundo numero: ");
	scanf("%d", &n2);
	printf("Digite o terceiro numero: ");
	scanf("%d", &n3);
	if((n1>n2) &&(n1>n3)){
		printf("%d - Maior valor", n1);
	}else if((n2>n1) && (n2>n3)){
		printf("%d - Maior valor", n2);
	}else{
		printf("%d - Maior valor", n3);
	}
}
