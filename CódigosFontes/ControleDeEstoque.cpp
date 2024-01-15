#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>

//STRUCT DAS INFORMAÇÕES DO PRODUTO
struct produto{
	char nome[30];
	int cod;
	int quant;
	float pre;
	struct produto *prox;
};
//MENU DAS FUNCIONALIDADES
int menu(){
	int op;
	system("cls");
	printf("<1> - Inserir item\n");
	printf("<2> - Vizualizar item do estoque\n");
	printf("<3> - Vizualizar estoque\n");
	printf("<4> - Alterar estoque\n");
	printf("<5> - Excluir produto\n");
	printf("<6> - Calcular valor do estoque\n");
	printf("<7> - Sair do programa\n");
	printf("==> Digite sua opcao: ");
	scanf("%d",&op);
	printf("\n\n");
	return op;
}
//FUNÇÃO PARA INSERIR O PRODUTO NO FINAL DA LSE
struct produto * InserirItem(struct produto *prim){
	int codigo, quantidade;
	float preco;
	char nome[30];
	struct produto *novo, *atual;
	
	system("cls");
	printf("-> Qual o codigo do produto: ");
	scanf("%d", &codigo);
	printf("-> Informe o nome do produto: ");
	scanf("%s", nome);
	printf("-> Quantidade do produto: ");
	scanf("%d", &quantidade);
	printf("-> Informe o preco do produto: ");
	scanf("%f", &preco);
	
	novo = (struct produto*) malloc (sizeof(struct produto));
	novo->cod = codigo;
	strcpy(novo->nome, nome);
	novo->pre = preco;
	novo->quant = quantidade;
	novo->prox = NULL;
	
	if(prim == NULL){
		//SE A LSE ESTIVER VAZIA
		prim = novo;
	}else{
		//INSERE NO FINAL DA LSE
		atual = prim;
		while(atual->prox != NULL){
			atual = atual->prox;
		}
		atual->prox = novo;
   }
	printf("\nInserido com sucesso!");
	getch();
	return prim;
}
//PROCEDIMENTO DE VISUALIZAR PRODUTO PELO CODIGO
void visualizarItem (struct produto *prim){
	int codigo;
	struct produto *atual;
	atual = prim;
	if(prim == NULL)
		printf("Estoque vazio!");
	else{
		system("cls");
		printf("Informe o codigo: ");
		scanf("%d", &codigo);
		//CAMINHAR PELA LSE PELO CODIGO INFORMADO
		while((atual != NULL) && (atual->cod != codigo))
			atual = atual->prox;
		if(atual == NULL)
			printf("Codigo incorreto!");
		else if(atual->cod == codigo){
			printf("-> Nome: %s\n", atual->nome);
			printf("-> Quantidade: %d", atual->quant);
			printf("\n-> Preco: R$%.2f", atual->pre);
		}
	}
	getch();
}
//PROCEDIMENTO PARA VIZUALIZAR TODOS OS PRODUTOS
void visualizarEstoque(struct produto *prim){
	struct produto *atual;
	atual = prim;
	if(prim == NULL)
		printf("Estoque vazio!");
	else{
		system("cls");
		printf("==> ESTOQUE: \n\n");
		while(atual != NULL){
			printf("-> Codigo: %d\n", atual->cod);
			printf("-> Nome: %s\n", atual->nome);
			printf("-> Quantidade: %d\n", atual->quant);
			printf("-> Preco: R$%.2f", atual->pre);
			printf("\n==------------------------------==\n");
			atual = atual->prox;
		}
	}
	getch();
}
//PROCEDIMENTO DE ALTERAÇÃO DE INFORMAÇÕES
void alterarItem(struct produto *prim){
	struct produto *atual;
	char op1[4], op2[4], op3[4], sim[4];
	int codigo, resultado;
	atual = prim;
	strcpy(sim,"sim");
	if(prim == NULL)
		printf("Estoque vazio!");
	else{
		system("cls");
		printf("Informe o codigo do produto: ");
		scanf("%d", &codigo);
		while((atual != NULL) && (atual->cod != codigo))
			atual = atual->prox;
		if(atual == NULL)
			printf("Codigo incorreto");
		else if(atual->cod == codigo){
			//PERGUNTAR AO USUARIO SE DESEJA MUDAR AS INFORMAÇÕES
			printf("Responda sim/nao!\n");
			printf("Deseja mudar o nome? ");
			scanf("%s", &op3);
			//COMPARAR CADA RESPOSTA DO USUARIO COM SIM
			resultado = strcmp(op3,sim);
			if(resultado == 0){
				printf("Informe o novo nome: ");
				scanf("%s", atual->nome);
	    	}
			printf("Deseja mudar a quantidade? ");
			scanf("%s", &op1);
			resultado = strcmp(op1,sim);
			if(resultado == 0){
				printf("Informe a nova quantidade: ");
				scanf("%d", &atual->quant);
			}
			printf("Deseja modificar o preco: ");
			scanf("%s", &op2);
			resultado = strcmp(op2,sim);
			if(resultado == 0){
				printf("Informe o novo preco: ");
				scanf("%f", &atual->pre);
			}
		}
	}
	getch();
}
//FUNÇÃO QUE EXCLUI O PRODUTO DE ACORDO COM O CODIGO
struct produto * excluirItem(struct produto *prim){
	struct produto *aux, *anterior;
	int codigo;
	if(prim == NULL)
		printf("Estoque vazio!");
	else{
		system("cls");
		aux = prim;
		printf("Informe o codigo: ");
		scanf("%d", &codigo);
		while((aux != NULL) &&(aux->cod != codigo)){
			anterior = aux;
			aux = aux->prox;
		}
		if(aux == NULL)
			printf("Codigo errado!");
		else if(aux->cod == codigo){
			//APOS ACHAR O PRODUTO, IF/ELSE IF VÃO VERIFICAR SE É NO INICIO,MEIO E FIM,ETC
			if((aux->prox == NULL) && (aux == prim)){
				prim = NULL;
				free(aux);
			}else if((aux->prox != NULL) && (aux == prim)){
				prim = aux->prox;
				free(aux);
			}else if(aux->prox != NULL){
				anterior->prox = aux->prox;
				free(aux);
			}else if(aux->prox == NULL){
				anterior->prox = NULL;
				free(aux);
			}
			printf("Produto removido!");
		}
	}
	getch();
	return prim;
}
//PROCEDIMENTO DE CALCULAR O VALOR DOS PRODUTOS
void valorEstoque(struct produto *prim){
	struct produto *atual;
	float soma = 0, total = 0;
	if(prim == NULL){
		printf("Estoque vazio!");
	}else{
		system("cls");
		atual = prim;
		while(atual != NULL){
			soma = soma + atual->pre;
			total = total + (atual->quant * atual->pre);
			atual = atual->prox;
		}
		//RETORNA A SOMA DOS PRECOS DOS PRODUTOS
		printf("Soma dos precos = R$%.2f", soma);
		//RETORNA O VALOR TOTAL DO ESTOQUE(QUANTIDADE x PREÇO) DE CADA UM
		printf("\nValor total do estoque = R$%.2f", total);
	}
	getch();
}
//FUNCAO PRINCIPAL
int main(){
	int opcao;
	struct produto *prim;
	prim = NULL;
	do{
		opcao = menu();
		switch(opcao){
		case 1 : prim = InserirItem(prim);
		break;
		case 2 : visualizarItem(prim);
		break;
		case 3 : visualizarEstoque(prim);
		break;
		case 4 : alterarItem(prim);
		break;
		case 5 : prim = excluirItem(prim);
		break;
		case 6 : valorEstoque(prim);
		break;
	    };
	}while(opcao != 7);
	return 0;
}
