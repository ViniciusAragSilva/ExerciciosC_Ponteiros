/*================================================================*?
EXERCICIO 1 - LISTA DE PONTEIROS 5 DE VINICIUS ARAGAO 4323
-------------------------------------------------------------------
  void v_maior(vetor_t *vet, int *maior, int *pos );
Função : encontra o maior valor contido no vetor vet
Parametros :    vet - vetor com os dados
maior - maior valor encontrado
pos - posição do maior valor no vetor
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
	int *d;                                                      // area de dados
	int t;                                                       // tamanho do campo de dados
}vetor_t; // representa um vetor de dados tipo inteiros

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
	void v_maior(vetor_t *vet, int *maior, int *pos );
	
	int i=0;													//variavel de controle
	int b[100];													//vetor que conta os valores 
	int *maior, *pos;
	int bigger = 0;											// maio seria o maior numero, posit a posicao
	vetor_t a;													// struct tipo [vetor_t] que vai armazenar o valor do vetor b no ponteiro d
	vetor_t *vet;												// struct que aponta pra outra struct a

	//////////////////////////////////////APRESENTANDO A FUNÇAO/////////////////////////////
	printf("===========================================================================\n");
	printf("\n\t\t\t EXERCICIO 1 \n");
	printf("\n\t *Esse exercicio pega um vetor vet (com menos de 100 valores)\n");
	printf("\n\t *E encontra o maior valor dele \n");
	printf("===========================================================================\n");
	////////////////////////////////////ATRIBUINDO VALORES/////////////////////////////////

	printf("\n digite o tamanho do vetor: ");					// digitar um valor entre 1 e 99 pra ser o tamanho de b
	scanf("%d", &a.t);											// atribui esse valor a int [t] da struct [a]
	fflush(stdin);	

	a.d = b;													// atribui o ponteiro [d] da struct [a] ao vetor b
	vet = &a;													// aponta a struct [vet] a struct [a]
	printf("\n vetor: ");
	while(i< a.t)												// enquanto i for menor q o tamanho digitado no scanf
	{
		b[i] = (rand() % 100);									// cada posição do vetor [b] sendo um numero aleatorio
		printf("%.2d  ", *(vet->d+i));							// olhando o valor do que o [d] que o *vet aponta que é o a e o [d] do [a] aponta pro vetor [b]
		i++;											
	}
	
	maior = &bigger;											// precisamos apontar o ponteiro [maior]  nesse momento, pro valor dele ser zero

	v_maior(vet, maior, pos);									// chamando função
}

/*	*	*	*	*	*	*	*	*	*	*	*	*	*	*	*	*	*	*	*	*	*	*	*	*	*	*	*/
/*																											*/
/*											FUNCOES EXTERNAS												*/
/*																											*/
/*	*	*	*	*	*	*	*	*	*	*	*	*	*	*	*	*	*	*	*	*	*	*	*	*	*	*	*/


void v_maior(vetor_t *vet, int *maior, int *pos)
{
	int k, j;													// variaveis de controle
	int valorPosic;												// int pra onde [pos] apontara a posição do maior numero

	for(j = 0; j< vet->t; j++)									// j repete até o valor de [t] apontado pela struct [vet]
	{
		if(*(vet->d+j) > *maior)								// se o valor que está no endereço que [vet] aponta mais [j] for maior q o [maior] (inicialmente ele aponta pro numero 0
		{
			maior = (vet->d+j);									//maior vira esse valor que é maior q o seu anterior
			
			valorPosic = j+1;									//a posição vira j (somado com 1 pra dar certinho, já que o vetor começa na posição zero
		}
	}
	pos = &valorPosic;											// [pos] aponta para o [valorposic] pra pegar a posição do maior valor
	
	printf("\n\n Resultados: \n");
	printf("\n\n O maior numero tem valor %.2d e está na posição %.2d   ", *maior, *(pos));	
	
}

