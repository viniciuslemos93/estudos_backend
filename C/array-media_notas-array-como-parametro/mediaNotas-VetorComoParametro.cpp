#include<stdio.h>
#include<stdlib.h>

//Passa um vetor para a função
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

//Função para o cálculo da media
float media(int n, float *vnotas)
{
	int i; float m = 0, soma = 0;
	
	//Somatória das notas.
	for(i = 0; i < n; i++)
		soma = soma + vnotas[i];
		
	//Dividindo pela quantidade de elementos n.
	m = soma/n;
	
	//Retorna a média.
	return m;
}
