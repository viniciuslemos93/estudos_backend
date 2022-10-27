#include<stdio.h>
#include<conio.h>
#include<string.h>
//5. Faça um programa que leia 3 strings e escreva o total de caracteres que cada uma possui.
main () {
	char str1[50], str2[50], str3[50];
	int i, qtdstr1, qtdstr2, qtdstr3;
	printf ("Digite os dados da String 1: ");
	
	gets(str1);
	printf ("Digite os dados da String 2: ");
	gets(str2);
	printf ("Digite os dados da String 3: ");
	gets(str3);
	
	qtdstr1 = 0;
	for(i=0; i < strlen(str1); i++) {                                                              
               qtdstr1++;
      }
    qtdstr2 = 0;
	for(i=0; i < strlen(str2); i++) {                                                              
               qtdstr2++;
      }
    qtdstr3 = 0;
	for(i=0; i < strlen(str3); i++) {                                                              
               qtdstr3++;
    }
	
	printf ("O total de caracteres da String 1 eh: %i \n", qtdstr1);
	printf ("O total de caracteres da String 2 eh: %i \n", qtdstr2);
	printf ("O total de caracteres da String 3 eh: %i \n", qtdstr3);
	
}
