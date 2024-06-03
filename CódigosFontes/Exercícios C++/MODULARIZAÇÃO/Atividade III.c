#include<stdio.h>
//Procedimento Mensagem
void mensagem(){
	printf("Bom dia!\n");
}
//Função MaiorValor
float maiorValor(float a, float b){
	if(a > b){
		return a;
	}else{
		return b;
	}
}
//Procedimento Idade
void verificarIdade(int a){
	if(a >= 18){
		printf("Maior de idade!");
	}else{
		printf("Menor de idade!");
	}
}
//Procedimento de par e impar
void parEimpar(int a){
	if(a % 2 == 0){
		printf("Numero par!");
	}else{
		printf("Numero impar!");
	}
}
//Procedimento de numero primo
void primo(int a){
	int i, cont = 0;
	for(i = 2; i < a; i++){
		if(a % i == 0){
			cont++;
		}
	}
	if(cont == 0){
		printf("Numero primo!");
	}else{
		printf("Nao e primo!");
	}
}
//Função Fatorial
int fatorial(int a){
	int fat = 1, i;
	for(i = 2; i <= a; i++){
		fat = fat * i;
	}
	return fat;
}
//Função Base e Expoente
int potencia(int a, int b){
	int i, resultado = 1;
	for(i = 1; i <= b; i++){
		resultado = resultado * a;	
	} 
	return resultado;
}
int fibonacci(int a){
	int i, n1 = -1, n2 = 1, n3;
	if (a <= 1) {
        return a;
    }
    for (i = 0; i <= a; i++) {
        n3 = n1 + n2;
        n1 = n2;
        n2 = n3;
    }
	return n2;
}

void main(){
	float n1, n2, resultado2;
	int idade, n3, n4, n5, n, resultado6, base, expoente, resultado7, resultado8;
	
	//Questão 1
	printf("--> Mensagem\n");
	mensagem();
	
	//Questao 2
	printf("\n--> Verificar maior valor");
	printf("\nInforme um valor: ");
	scanf("%f", &n1);
	printf("Informe outro valor: ");
	scanf("%f", &n2);
	resultado2 = maiorValor(n1, n2);
	printf("Maior Valor: %.2f", resultado2);
	printf("\n\n");
	
	//Questão 3
	printf("--> Verificar idade \n");
	printf("Informe sua idade: ");
	scanf("%d", &idade);
	verificarIdade(idade);
	printf("\n\n");
	
	//Questão 4
	printf("--> Verificar numero Par/Impar \n");
	printf("Digite um numero: ");
	scanf("%d", &n3);
	parEimpar(n3);
	printf("\n\n");
	
	//Questão 5
	printf("--> Verificar numero primo \n");
	printf("Digite um numero: ");
	scanf("%d", &n4);
	primo(n4);
	printf("\n\n");
	
	//Questão 6
	printf("--> Fatoracao\n");
	printf("Informe um valor: ");
	scanf("%d", &n5);
	resultado6 = fatorial(n5);
	printf("Fatorial de %d = %d", n5, resultado6);
	printf("\n\n");
	                                                      
	//Questão 7
	printf("--> Potencia \n");
	printf("Informe a base: ");
	scanf("%d", &base);
	printf("Informe seu expoente: ");
	scanf("%d", &expoente);
	resultado7 = potencia(base, expoente);
	printf("Resultado = %d", resultado7);
	printf("\n\n");
	
	//Questao 8
	printf("--> Enesimo termo da serie Fibonacci\n");
	printf("Informe um valor para N: ");
	scanf("%d", &n);
	resultado8 = fibonacci(n);
	printf("O %d termo: %d", n, resultado8);
	
}
