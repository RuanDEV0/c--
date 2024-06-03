#include<stdio.h>
//Modúlo menu da Calculadora
void menu(){
	printf("\n ------> Calculadora entre Inteiros <------\n");
	printf(" 1. Soma\n");
	printf(" 2. Subtracao\n");
	printf(" 3. Multiplicacao\n");
	printf(" 4. Divisao\n");
	printf(" 5. Sair do Programa");
}
//Modúlo leitura da opcão
void leituraOpcao(int *a){
	printf("\n--> Numero do Comando: ");
	scanf("%d", &*a);
	while((*a != 5) && (*a > 5) || (*a < 1)){
		printf("Erro!Informe novamente: ");
		scanf("%d", &*a);
	}
}
//Modúlo leitura dos dados de entrada
void leituraDeDados(int *a, int *b){
	printf("Informe o primeiro valor: ");
	scanf("%d", &*a);
	printf("Informe o segundo valor: ");
	scanf("%d", &*b);
}

//Modúlo de soma
int soma(int a, int b){
	return a + b;
}
//Modúlo subtração
int subtracao(int a, int b){
	return a - b;
}
//Modúlo multiplicação
int multiplicacao(int a, int b){
	return a * b;
}
//Modúlo divisão
float divisao(int a, int b) {
    if (b != 0) {
    	return (float)a / b;
    }else{
        printf("Erro: Impossivel dividir por zero!");
        return 0;
    }
}
void main(){
	int n1, n2, op;
	menu();
	leituraOpcao(&op);
	printf("\n");
	if(op == 1){
		leituraDeDados(&n1, &n2);
		printf("\n==>  %d + %d = %d", n1, n2, soma(n1, n2));
	}else if(op == 2){
		leituraDeDados(&n1, &n2);
		printf("\n==>  %d - %d = %d", n1, n2, subtracao(n1, n2));
	}else if(op == 3){
		leituraDeDados(&n1, &n2);
		printf("\n==>  %d X %d = %d", n1, n2, multiplicacao(n1, n2));
	}else if(op == 4){
		leituraDeDados(&n1, &n2);	
		printf("\n==>  %d : %d = %.2f", n1, n2, divisao(n1, n2));
	}
}
