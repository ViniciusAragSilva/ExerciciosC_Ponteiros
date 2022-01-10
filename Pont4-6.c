/*================================================================*?
EXERCICIO 6 - LISTA DE PONTEIROS 4 DE VINICIUS ARAGAO 4323
-------------------------------------------------------------------
  6. int cpx_div(complex_t *op1, complex_t *op2, complex_t *resultado);
Fun��o : Resultado recebe op1 / op2
Parametros : op1 e op2  -  ponteiro para as variaveis de entrada
resultado  - ponteiro para variavel que armazena resultado da opera��o
Retorno : 0 - opera��o realizada. -1 : divis�o por zero


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
#define pi 3.1415926535897932

typedef struct 
{
	double r; // parte real
	double i; // parte imaginaria
} complex_t;

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
	
	void cpx_mul(complex_t *op1, complex_t *op2, complex_t *resultado);							//funcao que calcula a multiplicacao dos numeros complexos
	
	double *mod, *ang, m, a;																	// mod � o ponteiro do m, ang � o ponteiro do a
	int select;																					//cada um vai pra uma struct de acordo com o numero que estiver (numero 1 ou 2)
			
	complex_t *op1;																				// um ponteiro do tipo [complex_t] chamado [op1]
	complex_t *op2;						
	complex_t oq1;																				//valor do tipo [complex_t] que ser� apontado pelo [op1]
	complex_t oq2;
	complex_t *resultado;																		// ponteiro que apontar� para o resultado final da divis�o
	complex_t result;
	//////////////////////////////////////APRESENTANDO A FUN�AO/////////////////////////////

	printf("===========================================================================\n");	
	printf("\n\t\t\t EXERCICIO 6 \n");
	printf("\n * \t Este programa pega dois numeros complexos em formato polar\n");
	printf("\n * \t E divide os dois \n");
	printf("\n==========================================================================\n");
	////////////////////////////////////ATRIBUINDO VALORES/////////////////////////////////
	for(select = 1; select<3; select ++)														//for que conta 2 vezes, uma para cada um dos dois numeros da opera��o
	{
		printf("\n \t \t Numero Complexo %d", select);
		printf("\n \t -------------------------------------\n");
		
		printf("\n Digite o m�dulo: ");
		scanf("%lf", &m);
		fflush(stdin);
	
		printf("\n Digite a fase (em graus): ");
		scanf("%lf", &a);
		fflush(stdin);
		
		switch(select)
		{
		case 1:
			op1 = &oq1;													//apontando op1 para a struct oq1
			op1->r = m;													//o valor do <r> que o op1 aponta (que � o <r> do oq1) � igual a m
			op1->i = a;	
	
			break;
			
		case 2:	
			op2 = &oq2;	
			op2->r = m;
			op2->i = a;
			
			break;
		} 
	} 
	printf("\n----------------------------------\n");
	printf("\n NUM 1: <%.2lf, i%.2lf> \n NUM 2: <%.2lf, i%.2lf> \n",op1->r, op1->i, op2->r, op2->i);
	
	resultado = &result;												//resultado aponta pro endere�o de result, pra ele ter aonde depositar um valor

	cpx_div(op1, op2, resultado);										//chama a funcao
		
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void cpx_div(complex_t *op1, complex_t *op2, complex_t *resultado)
{
	resultado->r = (op1->r) / (op2->r);									//divide os m�dulos
	resultado->i = (op1->i) - (op2->i);									//diminui os fasores
	
	printf("\n----------------------------------\n");
	printf("\n DIVISAO (em m�dulo e fase): <%.2lf, %.2lf�> \n",resultado->r, resultado->i);
	
}


