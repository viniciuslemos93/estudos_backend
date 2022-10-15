#include<stdio.h>
#include<string.h>
#include <locale.h>
#include <stdlib.h>
#define TAM 30
/*A ag�ncia de pesquisas �IBOPI� precisa de um programa para cadastrar os
dados dos atletas de v�lei do Rio Grande do Sul. As informa��es a serem
armazenadas, para cada atleta s�o: CPF, nome do clube em que joga, nome
do atleta, idade, altura e peso. Al�m de cadastrar os atletas, o programa
dever� oferecer a listagem de todos os dados dos atletas agrupados por
clube. lista simplesmente encadeada.*/

void topoMenu () {
	printf(" \n \t ------- IBOPI [Ag�ncia de Pesquisas] ------- \n ");
	printf("\n[1] - Inserir N� na Lista");
	printf("\n[2] - Pesquisar Idade na Lista");
	printf("\n[3] - Mostrar Lista");
	printf("\n[4] - Encerrar");
}

struct DadosAtleta {
char nome[TAM];
int idade;
char cpf[14];
char clube [30];
float altura;
float peso;
struct DadosAtleta *prox;
};
typedef struct DadosAtleta No;

// Primeiro N� da lista.
typedef struct {
	No *inicio;
}Lista;

void imprimirLista (Lista *l) {
	No *aux;
	aux = l->inicio;
	if (aux == NULL){
		printf ("\nLista vazia!\n");
	}else {
		while (aux != NULL) {			
			printf(" %s ", aux->nome);
			printf(" %i ", aux->idade);
			//printf(" %s ", aux->cpf);
			//printf(" %s ", aux->clube);
			printf(" %.2f ", aux->altura);
			printf(" %.2f ", aux->peso);
			
			aux = aux->prox;
			
		}
	}
}
//INSERIR N� NA LISTA
void inserirNo (Lista *l) {
	No *aux, *novoNo;
	aux = l->inicio;
	int novaIdade;
	float novaAltura;
	float novoPeso;
	char novoNome[TAM];
	
	printf("\t\n *** Cadastro *** \n");
	
	printf("Digite o Nome: ");
	fflush(stdin);
	gets(novoNome);
	
	printf("Digite a idade: ");
	fflush(stdin);
	scanf("%d", &novaIdade);
	
	printf("Digite a altura: ");
	fflush(stdin);
	scanf("%f", &novaAltura);
	
	printf("Digite o peso: ");
	fflush(stdin);
	scanf("%f", &novoPeso);		

	novoNo = malloc(sizeof(No));
	novoNo->nome[TAM] = novoNome[TAM];
	novoNo->idade = novaIdade;
	novoNo->altura = novaAltura;
	novoNo->peso = novoPeso;
	
	
	novoNo->prox = NULL;
	
	if (aux == NULL) {//Lista Vazia
		l->inicio = novoNo;
	}else{// Lista n�o vazia
		while (aux->prox != NULL) {
			aux = aux->prox;
		}
		aux->prox = novoNo;
	}
}

//BUSCAR N� NA LISTA
void buscarNo(Lista *l) {
	No *aux;
	aux = l->inicio;
	int valorBuscado, encontrou = 0;
	if (aux == NULL) {
		printf("Lista Vazia, valor n�o encontrado\n");
	}else {
		printf("\n\nDigite a idade para buscar: ");
		scanf("%i", &valorBuscado);
		printf("\n Valor(es) na Lista:\n\n");
		while (aux != NULL) {
			if (valorBuscado == aux->idade){			
				printf("Valor %i encontrado! \n", valorBuscado);
				encontrou = 1;
				break;
			}else {
				aux = aux->prox;
			}
		}
		if (encontrou == 0) {
			printf("\nValor n�o encontrado na lista! \n");
		}
	}
}

//REMOVER N� NA LISTA
void removerNo (Lista *l) {
	No *aux, *ant;
	int flgEncontrou = 0; //Flag para validar se possui ou n�o o valor que digitou para Remover.
	aux = ant = l->inicio;
	if (aux == NULL) {
		printf("\nLISTA VAZIA");
	}else{
		int valorRemover;
		printf("\nDigite o valor a ser removido: ");
		scanf("%i", &valorRemover);
		
		while (aux != NULL) {			
			if (valorRemover == aux->idade) {
				flgEncontrou = 1;
				if (aux == l->inicio) {//Testando se est� no Primeiro N�.
					l->inicio = aux->prox;
					free(aux);
					break;
				}else{
					ant->prox = aux->prox;
					free(aux);
					break;
				}
			}else {
				ant = aux;
				aux = aux->prox;
			}
		}
		if (flgEncontrou == 0) {
			printf("\n VALOR N�O ENCONTRADO");
		}
	}
}

void main(){
	setlocale(LC_ALL, "Portuguese");
	
	int opMenu;
	No *no1, *no2;
	Lista l;
	
	topoMenu();
	
	l.inicio = NULL;
	
	do {
	printf("\nO que deseja fazer? ");
	scanf("%d", &opMenu);
	
	switch (opMenu)
	{
   case 1://Inserir N� na Lista
     inserirNo(&l);
   break;

   case 2://Pesquisar uma Idade na Lista
     buscarNo(&l);
   break;
   
   case 3://Mostrar Lista
     imprimirLista(&l);
   break;

   default:
     printf("\nOp��o inv�lida\n");
	}
	}while(opMenu != 4);
}
