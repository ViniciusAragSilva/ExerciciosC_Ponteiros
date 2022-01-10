/*
EXERCICIO 6 - LISTA DE PONTEIROS DE VINICIUS ARAGAO 4323
----------------------------------------------
  6.  int  divisorTensao (float ve, float vs,  float *r1, float *r2*);
Fun��o :Calcula os valores de r1 e/ou r2 para os valores de ve e vs dados.
Se um dos valores  de r1 ou r2 forem 0, calcular o valor deste componente com
base no valor do outro.
Se ambos forem zero, notificar erro de parametro
Par�metros :    ve - tens�o de entrada
vs - tes�o de sa�da
r1 e r2 - resistores do divisor
Retorno : 0 para fun��o realizada, -1 r1 e r2 em zero, -2 para vs > ve.
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
	
	int verify(float a, float b, int escolha);							//funcao que verifica se as entradas estao corretas
	int  divTensao (float Vi, float Vo,  float *r1, float *r2);			//funcao que calcula o resistor faltando no divisor de tensao
	float Vi, Vo, a, b;													//variaveis para fazer o calculo
	float *r1, *r2;														//ponteiros
	int valores;														//variavel que confirma se as entradas est�o corretas
	printf("\n\t\t\t EXERCICIO 6");
	printf("\n\n * \t Ser� calculado um dos resistores de um divisor de tens�o \n\n");
	printf(" * \t baseado nas informa��es colocadas (Vo, Vi e 1 dos 2 resistores)");
	printf("\n____________________________________________________________________\n\n");
	
	////////////////////////DETERMINANDO VALORES//////////////////////
	
	valores=0;
	while(valores==0)													//a valores s� vai deixar de ser zero se as entradas tiverem certas
	{
		
		printf(" Digite a tens�o Vi (Entrada):  ");
		scanf("%f", &Vi);
		fflush(stdin);
		
		printf("\n Digite a tens�o Vo (Sa�da):  ");
		scanf("%f", &Vo);
		fflush(stdin);
		
		if(b > a)														//se Vo > Vi, coisa que n�o pode acontecer num divisor de tensao
		{
			printf("\n \t\t Inv�lido, tente novamente ");
			printf("\n-----------------------------------------------------------\n");
			valores=0;
		}else
		{
			valores++;													//se Vo for menor, sai do while
		}
				
	}
	
	
	valores=0;															
	while(valores==0)													//tamb�m s� sai do whie se as entradas tiverem certas
	{
		
		printf("\n Digite o r1 (ou zero):  ");
		scanf("%f", &a);					
		fflush(stdin);
		r1= &a;															//ponteiro � igual o endere�o de a
		
		printf("\n Digite o r2 (ou zero):  ");
		scanf("%f", &b);					
		fflush(stdin);
		r2= &b; 
		
		valores= verify(a, b, valores);									//vai pra fun��o verificar se t� certo (um dos resistores � zero)
	}

	divTensao (Vi, Vo, r1, r2);											//realiza a fun��o divisora de tens�o
}




//////////////////////////////////////FUNCAO: VERIFICANDO OS VALORES///////////////////////////////

int verify(float a, float b, int valores)
{
	if(a!= 0 && b== 0)								//testa se  � o unico com zero
	{	
		valores++;									//soma 1 a valores, pra quebrar o while
		
	}else if(a== 0 && b!= 0)
	{
		valores++;	
		
	}else
	{
		printf("\n \t\t Inv�lido, tente novamente ");
		printf("\n-----------------------------------------------------------\n");
		valores= 0;									//mantem em zero, pra repetir at� valores ser 1
	}
				
	return valores;									//retorna o valor colocado nesta fun��o
	
}


///////////////////////////////////////FUN�AO: FAZENDO O DIVISOR DE TENSAO/////////////////////////////////

int  divTensao (float Vi, float Vo,  float *r1, float *r2)
{
	float c, d;
	c = *r1;										//variavel c � igual o endere�o de r1, que � o valor de a
	d= *r2;
	
	if(c==0)
	{
		c = ((Vi/Vo) * d) - d;						//calculo tirado a partir da dedu��o de divisor de tens�o
		r1=&c;										//r1 � igual o endere�o de C
		printf("\n > O resistor r1 � %.3f ohms \n",*r1);
		
	}else if(d==0)
	{
		d = ((Vo/Vi) * c) / (1 - (Vo/Vi));
		r2=&d;
		printf("\n > O resistor r2 � %.3f ohms \n",*r2);	 
	}
}

