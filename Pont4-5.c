/*================================================================*?
EXERCICIO 5- LISTA DE PONTEIROS 4 DE VINICIUS ARAGAO 4323
-------------------------------------------------------------------
  5. void cpx_mul(complex_t *op1, complex_t *op2, complex_t *resultado);
Função : Resultado recebe op1 * op2
Parametros : op1 e op2  -  ponteiro para as variaveis de entrada
resultado  - ponteiro para variavel que armazena resultado da operação


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
	
	void cpx_mul(complex_t *op1, complex_t *op2, complex_t *resultado);
	
	double *mod, *ang, m, a;
	int select;
	
	complex_t *op1;									// uma struct do tipo [complex_t] chamada [cpx]
	complex_t *op2;
	complex_t oq1;
	complex_t oq2;
	complex_t *resultado;
	complex_t result;
	//////////////////////////////////////APRESENTANDO A FUNÇAO/////////////////////////////

	printf("===========================================================================\n");	
	printf("\n\t\t\t EXERCICIO 5 \n");
	printf("\n * \t Este programa pega dois numeros complexos em formato polar\n");
	printf("\n * \t E multiplica os dois \n");
	printf("\n==========================================================================\n");
	////////////////////////////////////ATRIBUINDO VALORES/////////////////////////////////
	for(select = 1; select<3; select ++)
	{
		printf("\n \t \t Numero Complexo %d", select);
		printf("\n \t -------------------------------------\n");
		
		printf("\n Digite o módulo: ");
		scanf("%lf", &m);
		fflush(stdin);
	
		printf("\n Digite a fase (em graus): ");
		scanf("%lf", &a);
		fflush(stdin);
		
		switch(select)
		{
		case 1:
			op1 = &oq1;													//apontando op1 para a struct oq1
			op1->r = m;													//o valor do <r> que o op1 aponta que é o <r> do oq1) é igual a m
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
	
	resultado = &result;		

	cpx_mul(op1, op2, resultado);
		
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void cpx_mul(complex_t *op1, complex_t *op2, complex_t *resultado)
{
	resultado->r = (op1->r) * (op2->r);
	resultado->i = (op1->i) + (op2->i);
	
	printf("\n----------------------------------\n");
	printf("\n MULTIPLICACAO (em módulo e fase): <%.2lf, %.2lfº> \n",resultado->r, resultado->i);
	
	
	
}
