#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<conio.h>
#include<string.h>

struct contato{
	int num;
	char nome[40];
	struct contato *prox;
};
struct contato *adicionarContato(struct contato *prim){
	int numero;
	char nom[40];
	struct contato *novo, *atual;
	
	system("cls");
	printf("Informe o nome? ");
	scanf("%s", &nom);
	printf("Digite o numero do contato: ");
	scanf("%d", &numero);
	
	novo = (struct contato*) malloc (sizeof(struct contato));
	strcpy(novo->nome, nom);
	novo->num = numero;
	novo->prox = NULL;
	
	if(prim == NULL){
		prim = novo;
	}else{
		atual = prim;
		while(atual->prox != NULL){
			atual = atual->prox;
		}
		atual->prox = novo;
	}
	
	printf("\nINSERIDO COM SUCESSO!");
	getch();
	return prim;
}
void visualizarContato(struct contato *prim){
	struct contato *atual;
	char nom[40];
	if(prim == NULL)
		printf("\nAGENDA VAZIA!");
	else{
		system("cls");
		printf("Informe o nome do contato? ");
		scanf("%s", &nom);
		atual = prim;
		
		while((atual != NULL) && (strcmp(nom,atual->nome) != 0)){
			atual = atual->prox;
		}
		if(atual == NULL)
			printf("Nome Incorreto!");
		else if(strcmp(nom,atual->nome) == 0)
			printf("-> Numero: %d", atual->num);
		
	}
	getch();
}
void listaContato(struct contato *prim){
	struct contato *atual;
	
	if(prim == NULL){
		printf("\nAGENDA VAZIA!");
	}else{
		system("cls");
		printf(" <--------------------- TODOS OS CONTATOS ----------------------------->\n\n");
		atual = prim;
		while(atual != NULL){
			printf(" -> Nome: %s\n", atual->nome);
			printf("\n\n");
			atual = atual->prox;
		}
	}
	getch();
}
void editarContato(struct contato *prim){
	struct contato *atual;
	int resultado, numero;
	char nom[40], op1[4], sim[4];
	strcpy(sim,"sim");
	if(prim == NULL)
		printf("\nAGENDA VAZIA!");
	else{
		system("cls");
		atual = prim;
		printf("Informe o nome do contato? ");
		scanf("%s", &nom);
		
		while((atual != NULL) && (strcmp(nom,atual->nome) != 0)){
			atual = atual->prox;
		}
		if(atual == NULL)
			printf("Nome Incorreto!");
		else if(strcmp(nom,atual->nome) == 0){
			printf("Deseja mudar o nome? ")	;
			scanf("%s", &op1);
			resultado = strcmp(op1,sim);
			if(resultado == 0){
				printf("\nInforme o novo nome? ");
				scanf("%s", &nom);
				strcpy(atual->nome,nom);
			}
			printf("Deseja mudar o numero? ");
			scanf("%s", &op1);
			resultado = strcmp(op1,sim);
			if(resultado == 0){
				printf("\nDigite o novo numero: ");
				scanf("%d", &numero);
				atual->num = numero;
			}
		}
		printf("\nCONTATO ALTERADO!");
	}
	getch();
}
struct contato * excluirContato(struct contato *prim){
	char nom[40];
	struct contato *atual, *anterior;
	if(prim == NULL)
		printf("\nAGENDA VAZIA!");
	else{
		system("cls");
		printf("Informe o nome do contato? ");
		scanf("%s", &nom);
		
		atual = prim;
		while((atual != NULL) && (strcmp(nom,atual->nome) != 0)){
			anterior = atual;
			atual = atual->prox;
		}
		if(atual == NULL){
			printf("Nome Incorreto!");
		}else if(strcmp(nom,atual->nome) == 0){
			if((atual == prim) && (atual->prox == NULL)){
				prim = NULL;
				free(atual);
			}else if((atual->prox != NULL) && (atual == prim)){
				prim = atual->prox;
				free(atual);
			}else if(atual->prox == NULL){
				anterior->prox = NULL;
				free(atual);
			}else if(atual->prox != NULL){
				anterior->prox = atual->prox;
				free(atual);
			}
			printf("\nRemovido com Sucesso!");
		}
	}
	getch();
	return prim;
}
int main(){
	int op;
	struct contato *prim = NULL;
	do{
		system("cls");
		printf("<-------- Agenda de Contatos ---------->");
		printf("\n <1> - Adicionar Contato");
		printf("\n <2> - Visualizar Contato");
		printf("\n <3> - Lista de Contatos");
		printf("\n <4> - Editar Contato");
		printf("\n <5> - Excluir Contato");
		printf("\n <6> - Sair do Programa");
		printf("\n ==> Opcao/Numero: ");
		scanf("%d", &op);
		switch (op){
			
			case 1: prim = adicionarContato(prim);
			break;
			case 2: visualizarContato(prim);
			break;
			case 3: listaContato(prim);
			break;
			case 4: editarContato(prim);
			break;
			case 5: prim = excluirContato(prim);
			break;
		}
	}while(op != 6);
}
