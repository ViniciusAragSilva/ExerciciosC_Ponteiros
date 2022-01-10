/*
EXERCICIO 1 - LISTA DE PONTEIROS 3 DE VINICIUS ARAGAO 4323
----------------------------------------------
  1.  void m_escala(int *mat, int k, int lin, int col);
Fun��o : Multiplica a matriz mat pelo escalar k. Armazena na pr�pria matriz
Parametros : mat	-  ponteiro para matriz origem
k	-  valor escalar multiplicando de mat
lin,col -  numero de linhas e colunas da matriz mat

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
	void m_escala(int *mat, int k, int lin, int col);				// fun��o que calcula a matriz resultante da multip escalar 
	int matriz[10][10], c, l, k;								   	// a matriz, c = coluna, l = linha, k = n� escalar		
	int i, j;														// variaveis de controle
	int *mat;														//pointer da matriz
	
	//////////////////////////////////////APRESENTANDO A FUN�AO/////////////////////////////

	printf("\n\t\t\t EXERCICIO 1");
	printf("\n\n * \t  Essa fun��o pega n�s de uma matriz de at� 100 valores (10 l 10 c) \n\n");
	printf(" * \t  E os Multiplica por uma escalar desejada	\n");
	printf("______________________________________________________________________\n");	
	
	////////////////////////////////////ATRIBUINDO VALORES/////////////////////////////////
	
	printf("\n Digite o numero de linhas:  ");					
	scanf("%d", &l);			
	fflush(stdin);
	printf("\n Digite o numero de colunas:  ");					
	scanf("%d", &c);			
	fflush(stdin);
	
		printf("\n Matriz gerada: \n");	
	
	if(c<=10 && l<=10)									
	{	
		
		for(i=0; i< l; i++)											//correndo as linhas
		{	
			for(j=0; j< c; j++)										//correndo as colunas
			{
				matriz[i][j] = (rand() % 100);						//n� aleatorio pra cada valor
				printf("|%4d   ", matriz[i][j]);		
			}
			printf("\n");
		}

		mat = &matriz[0][0];									//apontando para o endere�o do primeiro elemento da matriz
		
		printf("\n\n Digite o escalar da multiplica��o:  ");					
		scanf("%d", &k);			
		fflush(stdin);
		printf("\n\n");
		printf("-------------------------------------------------------\n");
		
		m_escala(mat, k, l, c);
											//chamando a fun��o
	}
	
}

////////////////////////////////////FUN�AO QUE REALIZA A OPERA�AO////////////////////////////////////

void m_escala(int *mat, int k, int lin, int col)
{
	
	int m, n;
	
	printf("\n Nova matriz: \n");
	
	for(m=0; m< lin; m++)										//correndo as linhas
	{
		for(n=0; n< col; n++)									//correndo as colunas

		{
			mat[m*10+n] = (mat[m*10+n] * k);					// a cada linha corrida, a matriz pula +10 endere�os, por isso o x10
			
  			printf("|%4d   ", mat[m*10+n]);
		}
		printf("\n");
	}
}
	

	
	
	
	
	
	
	

