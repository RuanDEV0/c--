#include<stdio.h>
#include<stdlib.h>
void main(){
	int idade;
	printf("Informe a idade: ");
	scanf("%d", &idade);
	if((idade<=10) && (idade<=12)){
		printf("Infantil");
	}else if((idade>12) && (idade<=18)){
		printf("Juvenil");
	}else if((idade>18) && (idade <= 40)){
		printf("Adulto");
	}else{
		printf("Nao e atleta");
	}
}
