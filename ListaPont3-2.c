/*
EXERCICIO 2 - LISTA DE PONTEIROS 3 DE VINICIUS ARAGAO 4323
----------------------------------------------
  2.  void m_identidade(int *mat, int ordem);
Função : preenche a matriz mat como matriz identidade (diagonal principal =1 e demais =0)
Parametros : mat - ponteiro para a área de armazenamento da matriz quadrada.
Ordem - tamanho da matriz (num linhas = num colunas)

*/
#include <windows.h>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

void main()
{
	////////////////////////////////////CRIANDO VARIAVEIS/////////////////////////////////////

	setlocale (LC_ALL,"");
	srand(time(NULL));
	void m_identidade(int *mat, int ordem);
	int matriz[10][10], ordem, i, j;
	int *mat;

	//////////////////////////////////////APRESENTANDO A FUNÇAO/////////////////////////////

	printf("\n\t\t\t EXERCICIO 2 \n");
	printf("\n\t * Esse programa recebe um nº para linha e coluna\n");
	printf("\n\t * E faz uma matriz identidade a partir dele\n");
	printf("______________________________________________________________________\n");
	
	////////////////////////////////////ATRIBUINDO VALORES/////////////////////////////////

	ordem = 0;
	while(ordem>10 || ordem< 1)
	{
		printf("Diga o valor da linha e da coluna da matriz quadrada:  ");
		scanf("%d", &ordem);
		fflush(stdin);
	}
	
	mat = &matriz[0][0];
	
	m_identidade(mat, ordem);
	
}



void m_identidade(int *mat, int ordem)
{
	int i, j;
	
	for(i=0; i< ordem; i++)
	{
		for(j=0; j< ordem; j++)
		{
			if(i == j)
			{
				mat[10*i +j] = 1;	
			}else
			{
				mat[10*i +j] = 0;
			}
			
			printf("|%3d   ", mat[10*i +j]);		
		}
		printf("\n");
	}
	
}
	
