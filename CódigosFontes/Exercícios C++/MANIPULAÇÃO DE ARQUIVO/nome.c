#include<stdio.h>
int main(void){
	FILE *nome;
	char primeiroNome[10];
	nome = fopen("nome.txt", "w");
	if(nome == NULL){
		printf("Erro na abertura do arquivo!");
		return 1;
	}
	printf("Informe seu primeiro nome? ");
	scanf("%s", &primeiroNome);
	fprintf(nome, "%s", primeiroNome);
	fclose(nome);
	nome = fopen("nome.txt", "r");
	char pNome[10];
	if(nome == NULL){
		printf("Erro na abertura do arquivo!");
		return 1;
	}
	while(fgets(pNome, 10, nome) != NULL){
		printf("%s", pNome);
	}
	fclose(nome);
}
