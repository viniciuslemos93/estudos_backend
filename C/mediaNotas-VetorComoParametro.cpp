#include<stdio.h>
#include<stdlib.h>

//Passa um vetor para a fun��o
float media ( int n, float *vnotas);

int main(void)
{
	float vnotas[10];
	float media_notas;
	int i;
	
	// leitura das notas
	for (i = 0; i < 10; i++) 
	{
		printf("Digite os valores das notas: ");
		scanf("%f", &vnotas[i]);
	}
	//Chamada da funcao
	media_notas = media(10, vnotas);
	
	printf("\n Media das notas = %.1f \n", media_notas);
	
	system("pause");
	return 0;
}

//Fun��o para o c�lculo da media
float media(int n, float *vnotas)
{
	int i; float m = 0, soma = 0;
	
	//Somat�ria das notas.
	for(i = 0; i < n; i++)
		soma = soma + vnotas[i];
		
	//Dividindo pela quantidade de elementos n.
	m = soma/n;
	
	//Retorna a m�dia.
	return m;
}
