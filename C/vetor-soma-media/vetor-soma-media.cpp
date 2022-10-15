#include<stdio.h>
#define TAM 10
/* 1. Escreva um programa que leia um vetor de 10 posições de inteiros e
apresente o somatório e a média aritmética de todos os valores. */

//Função que retorna um inteiro. A função recebe como parâmetro um ponteiro do vetor.
int somarVetor (int *vetor) {
	int soma = 0;
	for (int i = 0; i < 10; i++) {
		soma = soma + vetor[i];
	}	
	return soma;
}
//Função que retorna um float. A função recebe como parâmetro um ponteiro do vetor.
float calcularMediaVetor (int *vetor) {
	float media = 0;
	int tot = 0;
	//Laço de repetição para varrer o vetor, inserindo o valor de cada posição na variável'media'.
	for (int i = 0; i < TAM; i++) {
		media = media + vetor[i];
	}
	return media / TAM;
}

int main (void) {
	int vetor[TAM], soma;
	float media;
	
	for (int i = 0; i < TAM; i++) {
		printf (" POS[%i] - Digite um valor inteiro: ",i);
		scanf ("%i", &vetor[i]);
	}
	soma = somarVetor(vetor);
	media = calcularMediaVetor(vetor);
	
	printf ("A soma dos elementos do vetor eh: %i \n", soma);
	printf ("A media dos elementos do vetor eh: %.1f", media);	
	
return 0;
}
