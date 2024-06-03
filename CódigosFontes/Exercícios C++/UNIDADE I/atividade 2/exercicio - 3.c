#include<stdio.h>
#include<stdlib.h>
void main(){
	int n1, n2;
	printf("Digite primeiro valor: ");
	scanf("%d", &n1);
	printf("Digite o segundo valor: ");
	scanf("%d", &n2);
	if(n1>n2){
		printf("%d - E o maior", n1);
	}else{
		printf("%d - E o maior", n2);
	}
}
