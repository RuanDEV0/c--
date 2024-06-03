#include<stdio.h>
#include<stdlib.h>
void main(){
	float n1,n2,n3,media;
	
	
	printf("Informe o primeira nota: ");
	scanf("%f", &n1);
	printf("Informe o segunda nota: ");
	scanf("%f", &n2);
	printf("Informe o terceira nota: ");
	scanf("%f", &n3);
	media = (n1+n2+n3)/3;
	if(media>=7){
		printf("%.2f - Aprovado", media);
	}else{
		printf("%.2f - Reprovado", media);
	}
}
