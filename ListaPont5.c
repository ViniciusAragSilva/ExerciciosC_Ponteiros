/*
EXERCICIO 5- LISTA DE PONTEIROS 1 DE VINICIUS ARAGAO 4323
----------------------------------------------
  5.  int  triangulo-retangulo(float *oposto, *float adjacente, float *hipotenusa);
Função : Calcula o segmento do triângulo retângulo cujo valor é zero.
Parâmetros :    oposto - cateto oposto
adjacente - cateto adjacente
hipotenusa - hipotenusa
Retorno : 0 para função realizada, -1 para erro de parametro (dois ou mais parametros
em zero)
*/
#include <windows.h>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
#include <math.h>

int main()
{
	setlocale (LC_ALL,"");
	srand(time(NULL));
	
	int verify(float a, float b, float c, int escolha);		//função que verifica se as entradas foram colocadas corretamente
	int  triang_ret(float *op, float *adj, float *hipot);	// função que faz o calculo
	float *op, *adj, *hipot;								//ponteiros
	float a, b, c;											//variaveis que guardam os valores para serem apontados
	int valores;										    //variavel que determina se as entradas estão certas

	printf("\n\t\t\t EXERCICIO 5");
	printf("\n\n * \t Será calculado um dos componentes do triangulo retangulo \n\n");
	printf(" * \t baseado nas informações colocadas (2 informações e uma em zero)");
	printf("\n____________________________________________________________________\n\n");
	
	////////////////////////DETERMINANDO VALORES//////////////////////
	
	valores=0;
	while(valores==0)										//esse while ve se a entrada tá num modelo correto, com 2 valores e um zero
	{
		printf(" Digite o cateto oposto (ou zero):  ");
		scanf("%f", &a);
		fflush(stdin);
		op= &a;
		
		printf("\n %f ", *op);
		printf("\n Digite o cateto adjascente (ou zero):  ");
		scanf("%f", &b);
		fflush(stdin);
		adj= &b;
		
		printf("\n Digite a hipotenusa (ou zero):  ");
		scanf("%f", &c);					
		fflush(stdin);
		hipot= &c; 
		
		valores= verify(a, b, c, valores);					//função que verifica se tem 2 valores e 1 zero nas variaveis
	}
	triang_ret(op, adj, hipot);								//função que calcula o triangulo retangulo
}

/////////////////////////VERIFICANDO OS VALORES///////////////////////////////

int verify(float a, float b, float c, int valores)
{
	if(a!= 0 && b!= 0 && c== 0)								//testa se C é o unico com zero
	{
		valores = 1;
		
	}else if(a!= 0 && b== 0 && c!= 0)						//testa se B é o único com zero
	{
		valores = 1;
		
	}else if(a== 0 && b!= 0 && c!= 0)						//testa se o A é o único com zero
	{
		valores = 1;
		
	}else
	{
		printf("\n \t\t Inválido, tente novamente ");
		printf("\n-----------------------------------------------------------\n");
		valores=0;
	}
				
	return valores;
	
}

////////////////////////////////CALCULO DO VALOR/////////////////////////////////////

int  triang_ret(float *op, float *adj, float *hipot)
{
	float d, e, f;										//variaveis para mexer com o valor que os ponteiros apontam
	d = *op;											//as váriaveis obtem o valor no qual os ponteiros estão apontando
	e = *adj;
	f = *hipot;
	if(d==0)											//ve se o d foi a variavel zerada das inputs dos scanf¨s
	{
		d = sqrt(pow(f,2)-pow(e,2));					//pitagoras, <sqrt> é raiz quadrada, e <pow> é elevado a tal numero (no caso 2)
		op=&d;                     						//depois de feita a operação, o ponteiro aponta pro valor da variavel
		printf("\n > O cateto oposto é %f \n",*op);
		
	}else if(e==0)
	{
		e = sqrt(pow(f,2)-pow(d,2));
		adj=&e;
		printf("\n > O cateto adjascente é %f \n",*adj);
		
	}else if(f==0)
	{
		f = sqrt(pow(e,2)+pow(d,2));
		hipot = &f;
		printf("\n > A hipotenusa é %f \n",*hipot);
	}
	return 0;
	
}
