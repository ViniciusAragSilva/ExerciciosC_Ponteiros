/*
EXERCICIO 4- LISTA DE PONTEIROS 1 DE VINICIUS ARAGAO 4323
----------------------------------------------
  4.  int  sinal(float *frequencia, float *periodo );
Fun��o : Calcula o par�metro cujo valor � zero.
Par�metros :    frequencia  - ponteiro para o valor de frequencia do sinal
periodo  - ponteiro para o valor do periodo do sinal
Retorno : 0 para fun��o realizada, -1 para erro de parametro (dois parametros
em zero)

*/
#include <windows.h>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>


int main()
{
	setlocale (LC_ALL,"");
	srand(time(NULL));
	
	char det_sinal(char escolha);			//fun��o que detecta as op��es t, T (periodo). e f, F (frequencia)
	int  sinal(float *f, float *T);			//Fun��o que calcula ou a frequencia, ou o periodo
	float *f, *T;
	float a, b=0;											//floats usadas para atribuir valores, os quais os ponteiros v�o apontar
	char escolha;											//char que faz a escolha entre frequencia ou periodo
	printf("\n\t\t\t EXERCICIO 4");
	printf("\n\n * \t Escolha entre frequencia ou periodo do sinal \n\n");
	printf(" * \t Que ser� calculado o outro que n�o foi escolhido");
	printf("\n____________________________________________________________________\n\n");
	
	////////////////////////DETERMINANDO ENTRE FREQUENCIA OU PERIODO//////////////////////
	
	escolha=0;
	while(escolha==0)										//while que n�o para enquanto escolha for zero
	{
		printf(" Escolha entre frequencia (f) ou periodo (t): \n\n");
		scanf("%c", &escolha);					
		fflush(stdin);
		
		escolha= det_sinal(escolha);						//fun��o que limita os resultados a f, F, t e T
	}
	/////////////////////REALIZANDO O CALCULO//////////////////////////////

	switch(escolha)											//switch que escolhe entre frequencia ou periodo pra pedir o valor
	{	
		case 'f':case 'F':
			printf(" Voce escolheu frequencia, coloque o valor: \n\n");
			scanf("%f", &a);
			fflush(stdin);
			f= &a;											//atribui o ponteiro da frequencia pro valor dado no scan
			T = &b;											//atribui o ponteiro do periodo pra variavel cujo valor � zero
															
			break;
				
		case 't':case 'T':
			printf(" Voce escolheu periodo, coloque o valor: \n\n");
			scanf("%f", &a);
			
			T= &a;											//atribui o ponteiro do periodo pro valor dado no scan
			f= &b;											//atribui o ponteiro da frequencia pra variavel cujo valor � zero
			break;
	}
	printf("\nNo momento, periodo =  %f \n", *T);
	printf("\nNo momento, frequencia = %.3f \n", *f);
	sinal(f, T);


}

/////////////////////////DETERMINANDO SE SER� USADO FREQUENCIA OU PERIODO///////////////////////////////

char det_sinal(char escolha)
{
	switch(escolha)
		{
			case 'f':case 'F':
				break;
				
			case 't':case 'T':
				break;
				
			default:
				printf(" Inv�lido, tente novamente ");
				printf("\n-----------------------------\n\n");
				escolha=0;
				
		}
	return escolha;
	
}

////////////////////////////////CALCULO DA FREQUENCIA OU DO PERIODO/////////////////////////////////////

int  sinal(float *f, float *T)
{
	float c, d;			//c ser� a nova atribui��o da frequencia, d ser� do per�odo
	c = *f;
	d = *T;
	if(c!=0)			//um deles � zero, se c (frequencia) n�o for zero...
	{
		d= 1/(c);		//equa��o para descobrir o periodo a partir da frequencia
		T= &d;			//fazendo o ponteiro T apontar pro novo valor de d
		printf("\ncom uma frequencia de %.3f � calculado um per�odo de %f segundos\n",*f, *T);
	}else
	{
		c= 1/(d);
		f= &c;
		printf("\ncom um per�odo de %f � calculado uma frequencia de %.3f Hertz\n", *T, *f);
	}
	return 0;
	
}	

