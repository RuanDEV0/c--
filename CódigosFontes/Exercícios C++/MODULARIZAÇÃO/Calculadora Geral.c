#include<stdio.h>
//Modúlo menu da Calculadora
void menu(){
	printf("\n ------> Calculadora <------\n");
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
void leituraDeDados(double *a, double *b){
	printf("Informe o primeiro valor: ");
	scanf("%lf", &*a);
	printf("Informe o segundo valor: ");
	scanf("%lf", &*b);
}

//Modúlo de soma
double soma(double a, double b){
	return a + b;
}
//Modúlo subtração
double subtracao(double a, double b){
	return a - b;
}
//Modúlo multiplicação
double multiplicacao(double a, double b){
	return a * b;
}
//Modúlo divisão
double divisao(double a, double b) {
    if (b != 0) {
    	return a / b;
    }else{
        printf("Erro: Impossivel dividir por zero!");
        return 0;
    }
}
void main(){
	double n1, n2;
	int op;
	menu();
	leituraOpcao(&op);
	printf("\n");
	if(op == 1){
		leituraDeDados(&n1, &n2);
		printf("\n==>  %.2lf + %.2lf = %.2lf", n1, n2, soma(n1, n2));
	}else if(op == 2){
		leituraDeDados(&n1, &n2);
		printf("\n==>  %.2lf - %.2lf = %.2lf", n1, n2, subtracao(n1, n2));
	}else if(op == 3){
		leituraDeDados(&n1, &n2);
		printf("\n==>  %.2lf X %.2lf = %.2lf", n1, n2, multiplicacao(n1, n2));
	}else if(op == 4){
		leituraDeDados(&n1, &n2);	
		printf("\n==>  %.2lf : %.2lf = %.2lf", n1, n2, divisao(n1, n2));
	}
}
