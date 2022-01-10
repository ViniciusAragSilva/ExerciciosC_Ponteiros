/*
EXERCICIO 4- LISTA DE PONTEIROS 1 DE VINICIUS ARAGAO 4323
----------------------------------------------
  4.  int  sinal(float *frequencia, float *periodo );
Função : Calcula o parâmetro cujo valor é zero.
Parâmetros :    frequencia  - ponteiro para o valor de frequencia do sinal
periodo  - ponteiro para o valor do periodo do sinal
Retorno : 0 para função realizada, -1 para erro de parametro (dois parametros
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
	
	char det_sinal(char escolha);			//função que detecta as opções t, T (periodo). e f, F (frequencia)
	int  sinal(float *f, float *T);			//Função que calcula ou a frequencia, ou o periodo
	float *f, *T;
	float a, b=0;											//floats usadas para atribuir valores, os quais os ponteiros vão apontar
	char escolha;											//char que faz a escolha entre frequencia ou periodo
	printf("\n\t\t\t EXERCICIO 4");
	printf("\n\n * \t Escolha entre frequencia ou periodo do sinal \n\n");
	printf(" * \t Que será calculado o outro que não foi escolhido");
	printf("\n____________________________________________________________________\n\n");
	
	////////////////////////DETERMINANDO ENTRE FREQUENCIA OU PERIODO//////////////////////
	
	escolha=0;
	while(escolha==0)										//while que não para enquanto escolha for zero
	{
		printf(" Escolha entre frequencia (f) ou periodo (t): \n\n");
		scanf("%c", &escolha);					
		fflush(stdin);
		
		escolha= det_sinal(escolha);						//função que limita os resultados a f, F, t e T
	}
	/////////////////////REALIZANDO O CALCULO//////////////////////////////

	switch(escolha)											//switch que escolhe entre frequencia ou periodo pra pedir o valor
	{	
		case 'f':case 'F':
			printf(" Voce escolheu frequencia, coloque o valor: \n\n");
			scanf("%f", &a);
			fflush(stdin);
			f= &a;											//atribui o ponteiro da frequencia pro valor dado no scan
			T = &b;											//atribui o ponteiro do periodo pra variavel cujo valor é zero
															
			break;
				
		case 't':case 'T':
			printf(" Voce escolheu periodo, coloque o valor: \n\n");
			scanf("%f", &a);
			
			T= &a;											//atribui o ponteiro do periodo pro valor dado no scan
			f= &b;											//atribui o ponteiro da frequencia pra variavel cujo valor é zero
			break;
	}
	printf("\nNo momento, periodo =  %f \n", *T);
	printf("\nNo momento, frequencia = %.3f \n", *f);
	sinal(f, T);


}

/////////////////////////DETERMINANDO SE SERÁ USADO FREQUENCIA OU PERIODO///////////////////////////////

char det_sinal(char escolha)
{
	switch(escolha)
		{
			case 'f':case 'F':
				break;
				
			case 't':case 'T':
				break;
				
			default:
				printf(" Inválido, tente novamente ");
				printf("\n-----------------------------\n\n");
				escolha=0;
				
		}
	return escolha;
	
}

////////////////////////////////CALCULO DA FREQUENCIA OU DO PERIODO/////////////////////////////////////

int  sinal(float *f, float *T)
{
	float c, d;			//c será a nova atribuição da frequencia, d será do período
	c = *f;
	d = *T;
	if(c!=0)			//um deles é zero, se c (frequencia) não for zero...
	{
		d= 1/(c);		//equação para descobrir o periodo a partir da frequencia
		T= &d;			//fazendo o ponteiro T apontar pro novo valor de d
		printf("\ncom uma frequencia de %.3f é calculado um período de %f segundos\n",*f, *T);
	}else
	{
		c= 1/(d);
		f= &c;
		printf("\ncom um período de %f é calculado uma frequencia de %.3f Hertz\n", *T, *f);
	}
	return 0;
	
}	

