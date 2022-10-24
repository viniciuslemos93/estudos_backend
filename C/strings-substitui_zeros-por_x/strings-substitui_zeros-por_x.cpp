#include<stdio.h>
#include<string.h>
#define TAM 20
/*6. Escreva um programa que substitui as ocorrências de um caractere ‘0’ (zero)
em uma string por outro caractere ‘X’.*/

void substituiZerosDaString (char *str) {	
	int i = 0;
	
	while (str[i] != '\0') {
		if (str[i] == '0') {
			str[i] = 'X';
		}		
		i++;
	}
}
int main (void) {
	char string[TAM];
	
	printf ("Digite as letras ou numeros da String: ");
	gets(string);
	substituiZerosDaString(string);
	printf("Mostrando a String substituindo os '0' por 'x': %s", string);
	
return 0;
}
