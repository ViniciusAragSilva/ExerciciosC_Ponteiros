/*================================================================
EXERCICIO 1 - LISTA DE PONTEIROS 4 DE VINICIUS ARAGAO 4323
-------------------------------------------------------------------
  1.	void cpx_polar_in(complex_t *cpx, double mod, double ang);
Função : atribui à variável cpx o valor, dado em formato polar (modulo e ângulo).
Parametros : cpx  -  ponteiro para variavel tipo complex_t
mod  -  módulo do valor
ang  -  fase do valor

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
	void cpx_polar_in(complex_t *cpx, double mod, double ang);
	double mod, ang;
	
	complex_t complex;									// uma struct do tipo [complex_t] chamada [cpx]
	complex_t *pontcpx;								// uma struct/ponteiro do tipo [complex_t] chamada [pontcpx] 

	//////////////////////////////////////APRESENTANDO A FUNÇAO/////////////////////////////

	printf("===========================================================================\n");	
	printf("\n\t\t\t EXERCICIO 1 \n");
	printf("\n * \t Este programa pega um numero complexo em formato polar\n");
	printf("\n * \t E converte ele em formato retangular\n");
	printf("\n==========================================================================\n");
	////////////////////////////////////ATRIBUINDO VALORES/////////////////////////////////

	printf("\n Digite o módulo do complexo: ");
	scanf("%lf", &mod);
	fflush(stdin);
	
	printf("\n Digite a fase do complexo (em graus): ");
	scanf("%lf", &ang);
	fflush(stdin);
	
	pontcpx = &complex;														//atribuindo o endereço de [pontcpx] pro endereçço [cpx]

	cpx_polar_in(pontcpx, mod, ang);		
}


////////////////////////////////////FUNÇAO QUE REALIZA A OPERAÇAO////////////////////////////////////

void cpx_polar_in(complex_t *cpx, double mod, double ang)
{
	ang = (ang*pi)/180;														// transformando o angulo em radianos
	
	cpx->r = mod* cos(ang);													// calculando a parte real a partir do módulo dado
	cpx->i = mod* sin(ang);													//calculando a parte imaginaria a partir do fasor
	 
	printf("\n-------------------------------------\n");
	printf("\n Parte R: <%.3lf> Parte I: <%.3lf> ", cpx->r, cpx->i);		//apresentando o que o ponteiro está apontando na posição [r] e [i]

}




