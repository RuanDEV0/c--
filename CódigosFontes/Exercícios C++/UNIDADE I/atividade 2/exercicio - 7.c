#include<stdio.h>
#include<stdlib.h>
void main(){
	float salario;
	printf("Informe o seu salario: ");
	scanf("%f", &salario);
	if(salario<=350){
		salario = salario+(0.5*salario);
		printf("Seu salario final = %.3f", salario);
	}else{
		salario = salario+(0.3*salario);
		printf("Seu salario final = %.3f", salario);
	}
}
