#include<stdio.h>
int idadeDia(int a, int b, int c){
	int resu;
	resu = (a*365)+(b*30)+c;
	return resu;
}
void main(){
	int n1, n2, n3;
	printf("Informe sua Idade em: \n");
	printf("Anos: ");
	scanf("%d", &n1);
	printf("Meses: ");
	scanf("%d", &n2);
	printf("Dias: ");
	scanf("%d", &n3);
	printf("Sua idade em dias = %d", idadeDia(n1, n2, n3));
}
