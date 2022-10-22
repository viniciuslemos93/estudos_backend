#include<stdio.h>

int main (void) {
	char frase[30], *ptr;
	
	printf ("\n Digite uma frase: ");
	gets(frase);
	
	printf ("Imprimindo caracter a caracter: ");
	//For que varre todo o array, exibindo caracterer por caracter após o espeço.
	for (ptr = frase; *ptr != '\0'; ptr++) {
		printf (" %c", *ptr);
	}	
	
return 0;
}
