#include<stdio.h>
#include<string.h>
#include <locale.h>
#include <stdlib.h>
#define TAM 3
/*1. A agência de pesquisas “IBOPI” precisa de um programa para cadastrar os
dados dos atletas de vôlei do Rio Grande do Sul. As informações a serem
armazenadas, para cada atleta são: CPF, nome do clube em que joga, nome
do atleta, idade, altura e peso. Além de cadastrar os atletas, o programa
deverá oferecer a listagem de todos os dados dos atletas agrupados por
clube. Usar vetor de registros. Cadastrar no mínimo atletas de 3 times de
vôlei (18 atletas).*/

void topoMenu () {
	printf(" \t ------- IBOPI [Agência de Pesquisas] ------- \n ");
}

int main (void) {
	setlocale(LC_ALL, "Portuguese");		
	struct DadosAtleta {
	char nome[25];
	int idade;
	char cpf[14];
	char clube [30];	
	float altura;
	float peso;	
	};
	
	struct DadosAtleta atleta[TAM];	
	//Laço de repetição que repetirá conforme valor definido na CONSTANTE - será a quantidade de cadastros de cada estrutura.
	for (int i = 0; i < TAM; i++) {
		topoMenu();
		printf("\n\n *** Cadastro *** \n Digite o nome do Atleta: ");
		fflush(stdin);		
		gets(atleta[i].nome);
		
		printf("Idade de %s: ", atleta[i].nome);
		fflush(stdin);
		scanf("%d", &atleta[i].idade);
		
		printf("CPF de %s: ", atleta[i].nome);
		fflush(stdin);
		gets(atleta[i].cpf);
		
		printf("Qual clube %s joga atualmente: ", atleta[i].nome);
		fflush(stdin);
		gets(atleta[i].clube);
		
		printf("Qual a altura de %s: ", atleta[i].nome);
		fflush(stdin);
		scanf("%f", &atleta[i].altura);
		
		printf("Qual o peso de %s: ", atleta[i].nome);
		fflush(stdin);
		scanf("%f", &atleta[i].peso);
		
		system ("cls");
	}
	
	topoMenu();
	printf(" \n ****** EXIBINDO ATLETAS ****** \n \n");
	//Laço de repetição exibindo todas as estruturas cadastradas.
	for (int i = 0; i < TAM; i++) {
		printf("\n Atleta: %s \n", atleta[i].nome);
		printf("Idade: %i \n", atleta[i].idade);
		printf("CPF: %s \n", atleta[i].cpf);
		printf("Clube: %s \n", atleta[i].clube);
		printf("Altura: %.2fm \n", atleta[i].altura);
		printf("Peso: %.2fKg \n", atleta[i].peso);
		printf("-----------------");
	}
	
return 0;
}
