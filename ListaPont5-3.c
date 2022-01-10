/*================================================================*?
EXERCICIO 3 - LISTA DE PONTEIROS 5 DE VINICIUS ARAGAO 4323
-------------------------------------------------------------------
  3.   int m_tramsposta(matriz_t *mat_t, matriz_t *mat );
Função : obtem a transposta de matrizes
Parametros :     mat - matriz origem
mat_t - matriz transposta
Retorno : 0 - função executada,  -1 : tamanhos incompativeis
/*=============================================================*/

/*	*	*	*	*	*	*	*	*	*	*	*	*	*	*	*	*	*	*	*	*	*	*	*	*	*	*	*/
/*																											*/
/*											INCLUDES														*/
/*																											*/
/*	*	*	*	*	*	*	*	*	*	*	*	*	*	*	*	*	*	*	*	*	*	*	*	*	*	*	*/

#include <windows.h>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
#include <math.h>

/*	*	*	*	*	*	*	*	*	*	*	*	*	*	*	*	*	*	*	*	*	*	*	*	*	*	*	*/
/*																											*/
/*											PRE CODIGO														*/
/*																											*/
/*	*	*	*	*	*	*	*	*	*	*	*	*	*	*	*	*	*	*	*	*	*	*	*	*	*	*	*/

typedef struct
 {
	int lin;                                                     // posição na linha
	int col; 													// posição na coluna
}pos2d_t; // posição em sistema de coordenadas 2d

typedef struct
{
	int *d;                                                      // area de dados
	pos2d_t t;                                                   // tamanho do campo de dados
}matriz_t; // representa uma matriz de dados tipo inteiros

/*	*	*	*	*	*	*	*	*	*	*	*	*	*	*	*	*	*	*	*	*	*	*	*	*	*	*	*/
/*																											*/
/*											MAIN															*/
/*																											*/
/*	*	*	*	*	*	*	*	*	*	*	*	*	*	*	*	*	*	*	*	*	*	*	*	*	*	*	*/


int main()
{
	////////////////////////////////////CRIANDO VARIAVEIS/////////////////////////////////////

	setlocale (LC_ALL,"");
	srand(time(NULL));
	int m_transposta(matriz_t *mat_t, matriz_t *mat);						// função externa
	
	matriz_t mat, mat_t;															// [mat] struct onde ficara a matriz, [mat_t] struct da transposta
	matriz_t *mpoin, *mpoin_t;												// ponteiros pra matriz e pra transposta
	int i, j;																// variaveis de controle

	//////////////////////////////////////APRESENTANDO A FUNÇAO/////////////////////////////
	printf("===========================================================================\n");
	printf("\n\t\t\t EXERCICIO 3\n");
	printf("\n\t * Programa Matriz Transposta \n");
	printf("\n\t * Digite um tamanho de coluna e linha e será gerada uma matriz \n");
	printf("\n\t * A partir dela será gerada uma matriz transposta \n");
	printf("===========================================================================\n");
	////////////////////////////////////ATRIBUINDO VALORES/////////////////////////////////

	printf("\n Digite o numero de linhas: ");
	scanf("%d", &mat.t.lin);												// a linha da matriz
	fflush(stdin);
	printf("\n Digite o numero de colunas: ");	
	scanf("%d", &mat.t.col);												// a coluna da matriz
	fflush(stdin);
	
///////MATRIZ CRIADA COM BASE NO TAMANHO
	int b[mat.t.lin][mat.t.col];											// matriz normal
	int b_t[mat.t.col][mat.t.lin];											// matriz que será apontada
	
	mat.d = &b[0][0];														// dados da struct apontando pro endereço da matriz [b]
	mpoin = &mat;															// struct ponteiro apontando pro endereço da struct [mat]
	
	printf("\n Matriz A: \n");
	
	for(i = 0; i< mpoin->t.lin; i++)										// for das linhas da matriz
	{
		for(j = 0; j< mpoin->t.col; j++)									// for das colunas da matriz
		{
			b[i][j] =  (rand() % 100);										// numero aleatorio para cada valor
			printf("%.2d  ", mpoin->d[mat.t.col*i + j]);					// mostrando o numero que o ponteiro [mpoin] aponta na int[col] da struct [t] da struct [mat]
		}
		printf("\n");
	}
	mat_t.d = &b_t[0][0];
	mpoin_t = &mat_t;
	
	m_transposta(mpoin_t, mpoin);
	
}

/*	*	*	*	*	*	*	*	*	*	*	*	*	*	*	*	*	*	*	*	*	*	*	*	*	*	*	*/
/*																											*/
/*											FUNCOES EXTERNAS												*/
/*																											*/
/*	*	*	*	*	*	*	*	*	*	*	*	*	*	*	*	*	*	*	*	*	*	*	*	*	*	*	*/

int m_transposta(matriz_t *mat_t, matriz_t *mat)
{
	int i, j;
	
	mat_t->t.col = mat->t.lin;
	mat_t->t.lin = mat->t.col;
	

	
	printf("\n\n Matriz Atransp: \n");
	for(i = 0; i< mat_t->t.lin; i++)											// for das linhas da matriz
	{	
		for(j = 0; j< mat_t->t.col; j++)										// for das colunas da matriz
		{
			mat_t->d[mat_t->t.col*i + j] = mat->d[mat->t.col*j + i];
			
			printf("%.2d  ", mat_t->d[mat_t->t.col*i + j]);					// mostrando o numero que o ponteiro [mpoin] aponta na int[col] da struct [t] da struct [mat]
		}
		printf("\n");
	}
	
	
	
	
}


