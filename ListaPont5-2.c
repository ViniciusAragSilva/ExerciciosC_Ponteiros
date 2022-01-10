/*================================================================*?
EXERCICIO 2 - LISTA DE PONTEIROS 5 DE VINICIUS ARAGAO 4323
-------------------------------------------------------------------
  2.   int mat_vetor(matriz_t *mat, vetor_t *vet, int lin)
Fun��o : copia os valores do vetor *vet para a linha lin da matriz mat
Parametros :     vet  - vetor origem dos dados
mat - matriz destino
lin - linha a ser copiada
Retorno : 0 - fun��o executada completamente
-1 - tamanhos incompativeis
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
	int lin;                                                     // posi��o na linha
	int col; 													// posi��o na coluna
}pos2d_t; // posi��o em sistema de coordenadas 2d

typedef struct
{
	int *d;                                                      // area de dados
	int t;                                                       // tamanho do campo de dados
}vetor_t; // representa um vetor de dados tipo inteiros


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
	void mat_vetor(matriz_t *mat, vetor_t *vet, int lin);

	matriz_t mat;													// a struct [mat] vai guardar os dados da matriz
	matriz_t *matp;													// o ponteiro de struct [matp] vai apontar pra mat
	vetor_t *vetp, vet;												// o vetor [vet] vai guardar os valores do vetor e o [vetp] vai apontar
	int i, lin, j;													// i e j, s�o variaveis de controle e lin a linha

	//////////////////////////////////////APRESENTANDO A FUN�AO/////////////////////////////
	
	printf("===========================================================================\n");
	printf("\n\t\t\t EXERCICIO 2 \n");
	printf("\n\t * Esse exercicio copia os valores de um vetor \n");
	printf("\n\t * E joga na primeira linha de uma matriz \n");
	printf("===========================================================================\n");

/////////////////////////////////////ENTRADA DE VALORES//////////////////////////////////////

	printf("\n Digite o tamanho do vetor (ser� o tamanho da linha da matriz): ");
	scanf("%d", &vet.t);								// [vet.t] � o tamanho do vetor 
	fflush(stdin);
	
	printf("\n Digite qual a linha da matriz que ser� colocada: ");
	scanf("%d", &lin);									// em qual linha vai ser colocado
	fflush(stdin);
	
///////////////////////////////ATRIBUINDO VALORES///////////////////////////////////////////
		
	/////// VETOR CRIADO COM BASE NO TAMANHO
	int a[vet.t];										//cria-se o vetor com base no tamanho dado

	vet.d = a;											// [vet.d] que s�o os dados do vetor, igualam-se ao vetor a
	vetp = &vet;										// [*vetp] aponta para o endere�o de [vet]
	
	printf("\n Vetor: \n");	
	for(i=0; i<vet.t; i++)								// roda o FOR pelo numero do tamanho do vetor dado no scanf
	{
		a[i] = (rand() % 100);							// d� um valor aleatorio pra cada valor do vetor [a]
		printf("%.2d  ", *(vetp->d+i));					// mostra o que o [*vetp] aponta no [*d], que � o vetor [a] pulando de i em i endere�os
	}
	
	/////// MATRIZ CRIADA COM BASE NO TAMANHO
	int b[lin][vet.t];									// as linhas v�o at� o [lin] dado no scanf e as colunas v�o at� o tamanho do [vet.t]
	
	printf("\n Matriz: \n");	
	for(j=0; j<(lin-1); j++)							// o FOR roda at� a penultima linha da linha escolhida no scanf
	{						
		for(i=0; i<vet.t; i++)							// esse outro for roda at� o numero de colunas/tamanho do vetor dado no scanf 						
		{
			b[j][i] = 0;								// zera tudo na matriz at� a penultima linha
			printf("%.2d  ", b[j][i]);					// apresenta a matriz
		}
		printf("\n");
	}
	
	mat.d = &b;											// os dados da struct [mat] apontam pro endere�o da matriz [b]
	matp = &mat;										// [matp] aponta pro endere�o de [mat]
	
	mat_vetor(matp, vetp, lin);							// fun��o externa
	
}

/*	*	*	*	*	*	*	*	*	*	*	*	*	*	*	*	*	*	*	*	*	*	*	*	*	*	*	*/
/*																											*/
/*											FUNCOES EXTERNAS												*/
/*																											*/
/*	*	*	*	*	*	*	*	*	*	*	*	*	*	*	*	*	*	*	*	*	*	*	*	*	*	*	*/

void mat_vetor(matriz_t *mat, vetor_t *vet, int lin)
{
	int i, j;											// variaveis de controle
	
	printf("\n\n Linha da matriz: \n");
	for(j =0; j< lin; j++)								// FOR roda o j at� ele chegar em lin (dado pelo scanf)
	{
		for(i = 0; i< (vet->t); i++)					// FOR roda at� o i chegar no valor de t que vet aponta (que seria o tamanho da linha/do vetor)
		{
			if(j<(lin-1))								// se o j for menor q a penultima linha:
			{
				printf("%.2d  ", *(mat->d + i));
			}else										// se n�o:
			{
				mat->d= vet->d;							//atribui os dados do vetor aos dados da matriz
				printf("%.2d  ", *(mat->d + i));
			}
		}
		printf("\n");
	}
}





