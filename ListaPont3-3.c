/*
EXERCICIO 3 - LISTA PONTEIROS 3 DE VINICIUS ARAGAO 4323
----------------------------------------------
  3.  int m_transposta (int *mat_t, int *mat,int lin, int col);
Função : Gera a matriz transposta da matriz de entrada mat
Parametros : mat_t - ponteiro para a área da matriz transposta
mat  - ponteiro para area da matriz de entrada/origem
lin,col - numero de linhas e colunas da matriz origen
Retorno : quantidade de valores copiados para p. 0 se ocorreu erro.
DICA : declare variável para armazenar os dados apontados por mat_t no programa principal.

*/
#include <windows.h>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>


int main()
{
	////////////////////////////////////CRIANDO VARIAVEIS/////////////////////////////////////

	setlocale (LC_ALL,"");
	srand(time(NULL));
	int m_transposta (int *mat_t, int *mat,int lin, int col);
	int matriz[10][10], transp[10][10], c, l;								   	// a matriz, c = coluna, l = linha, k = nª escalar		
	int i, j;														// variaveis de controle
	int *mat, *mat_t;														//pointer da matriz
	
	//////////////////////////////////////APRESENTANDO A FUNÇAO/////////////////////////////

	printf("\n\t\t\t EXERCICIO 3");
	printf("\n\n * \t  Essa função pega nºs de uma matriz de até 100 valores (10 l, 10 c) \n\n");
	printf(" * \t  E cria uma matriz transposta	\n");
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
				matriz[i][j] = (rand() % 100);						//nª aleatorio pra cada valor
				printf("|%4d   ", matriz[i][j]);		
			}
			printf("\n");
		}

		mat = &matriz[0][0];									//apontando para o endereço do primeiro elemento da matriz
		mat_t = &transp[0][0];
		printf("\n\n");
		printf("-------------------------------------------------------\n");
		 
		m_transposta (mat_t, mat, l, c);
		
	}
}

int m_transposta (int *mat_t, int *mat,int lin, int col)
{
	int m, n;
	
	/*	pra inverter, é necessario trocar a ordem
	de linha/coluna pra coluna/linha
	*/	
	for(m=0; m< col; m++)										//correndo as colunas
	{
		for(n=0; n< lin; n++)									//correndo as linhas

		{
			mat_t[m*10+n] = mat[n*10+m];					// percorrendo mat : as linhas como se fossem colunas e vice versa e atribuindo a forma normal de mat_t
			
  			printf("|%4d   ", mat_t[m*10+n]);
		}
		printf("\n");
	}

}







