#include<stdio.h>
#include<string.h>
#define TAM 20

// 7. Faça um programa que receba uma palavra e a imprima de trás-para-frente.

void inverterPalavra (char *str) {
	char palavraInvertida[TAM];
	int i, j = 0;
	
	for (i = strlen (str) - 1; i >= 0; i--) {
		palavraInvertida [j] = str [i];
		j++;
		
		//printf ("%c", str [i]);
	}
	palavraInvertida [j] = '\0';
	printf ("%s", palavraInvertida);
	
	
}

int main (void) {
	char palavra[TAM];
	
	printf ("Escreva uma palavra: ");
	gets(palavra);	
	printf("Palavra invertida: \n ");
	inverterPalavra(palavra);
	
	
return 0;
}
