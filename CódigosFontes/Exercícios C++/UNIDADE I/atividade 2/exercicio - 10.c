#include<stdio.h>
#include<stdlib.h>
void main(){
	int idade;
	printf("Informe sua idade: ");
	scanf("%d", &idade);
	
	if(idade<16){
		printf("-> Nao-eleitor");
	}else if((idade>=18) && (idade<=65)){
		printf("-> Eleitor Obrigatorio");
	}else if((idade>=16) && (idade<18) || (idade>65)){
		printf("-> Eleitor facultativo");
	}
}
