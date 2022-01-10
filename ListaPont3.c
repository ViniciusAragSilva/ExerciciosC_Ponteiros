/*
EXERCICIO 3 - LISTA DE PONTEIROS DE VINICIUS ARAGAO 4323
----------------------------------------------
  3.  int  ordena (int *n1, int *n2, int *n3, char ordem );
Fun��o :ordena os valores passados em ordem crescente ou decrescente.
Par�metros :  n1, n2 e n3 - ponteiros com valores a serem ordenados
ordem - �c� para ordenamento crescente e �d� para ordenamento
decrescente. Pode ser maiusculo ou minusculo.
Retorno : 0 para fun��o realizada,	 -1 para erro de parametro
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
	
 	char cond_ord(char ordem);									//fun��o que verifica as condi�oes; somente d, D, c ou C s�o admitidos
 	int  ordena (int *n1, int *n2, int *n3, char ordem);		//fun��o que faz o requisitado; ordena de acordo com crescente ou decrescente
	int *n1, *n2, *n3;
	int num[3], i;
	char ordem;
	printf("\n\t\t\t EXERCICIO 3");
	printf("\n\n * \t  Coloque 3 valores e eles ser�o ordenados de acordo com a ordem \n");
	printf(" * \t	c ou C para crescente. \t d ou D para decrescente.   	\n\n");

	////////////Cumprindo Condi��es da Ordem/////////////
	
	ordem= 0;
	while (ordem==0)
	{	
		printf("\n * \t  Digite a ordem que voce deseja: ");
		scanf("%c", &ordem);		
		fflush(stdin);
	
		ordem= cond_ord(ordem);				//aten��o aqui: tem q atribuir a variavel ordem a fun��o, o return da fun��o � o resultad0
			
	}
	
	///////////Realizando a ordena��o///////////////////
	
	printf(" * \t  Valor a: ");
	scanf("%d", &num[0]);
	printf("\n * \t  Valor b: ");
	scanf("%d", &num[1]);
	printf("\n * \t  Valor c: ");
	scanf("%d", &num[2]);
	
	n1= &num[0];			//O endere�o do ponteiro n1 vira o endere�o de num[0], consequentemente tendo o mesmo valor
	n2= &num[1];
	n3= &num[2];
	
	ordena(n1, n2, n3, ordem);
	
	valores (n1, n2, n3);
	
}

/////////////////////////////////////////CONDI��ES DA ORDEM DAS VARI�VEIS////////////////////////////////
char cond_ord(char ordem)
{
	switch(ordem)
	{
		case 'c':case 'd':case 'C':case 'D':
			printf("\n * \t  A ordem � %c \n\n", ordem);
			break;
			
		default:			//esse default impede que haja algum outro simbolo na variavel ordem, reiniciando o while da main
			ordem= 0;
			printf("\n Voce digitou algo incorreto, tente novamente (Erro de parametro)");
			break;
			
	}
	return ordem;				//retorna o valor atribuido a ordem na main, que pode ser somente c, d, C ou D
}

////////////////////////////////////////ORDENANDO AS VARIAVEIS//////////////////////////////////////

 int  ordena (int *n1, int *n2, int *n3, char ordem )
 {
 	switch(ordem)		
 	{
 		case 'c': case 'C':							//observa todas as 6 possibilidades de ordem e utiliza uma delas com aninhamento de IFs
 			if(*n1>*n2 && *n1>*n3 && *n2>*n3)
 			{
 				printf("\n A ordem � %d, %d e %d", *n1, *n2, *n3);
 				
			}else 
			if(*n1>*n2 && *n1>*n3 && *n3>*n2)
			{
				printf("\n A ordem � %d, %d e %d", *n1, *n3, *n2);
				
			}else 
			if(*n2>*n1 && *n2>*n3 && *n1>*n3)
			{
				printf("\n A ordem � %d, %d e %d", *n2, *n1, *n3);
				
			}else 
			if(*n2>*n1 && *n2>*n3 && *n3>*n1)
			{
				printf("\n A ordem � %d, %d e %d", *n2, *n3, *n1);
				
			}else 
			if(*n3>*n1 && *n3>*n2 && *n1>*n2)
			{
				printf("\n A ordem � %d, %d e %d", *n3, *n1, *n2);
				
			}else
			 if(*n3>*n1 && *n3>*n2 && *n2>*n1)
			{
				printf("\n A ordem � %d, %d e %d", *n3, *n2, *n1);
				
			}
			break;
			
		case 'd': case 'D':
 			if(*n1>*n2 && *n1>*n3 && *n2>*n3)
 			{
 				printf("\n A ordem � %d, %d e %d", *n3, *n2, *n1);
 				
			}else 
			if(*n1>*n2 && *n1>*n3 && *n3>*n2)
			{
				printf("\n A ordem � %d, %d e %d", *n2, *n3, *n1);
				
			}else 
			if(*n2>*n1 && *n2>*n3 && *n1>*n3)
			{
				printf("\n A ordem � %d, %d e %d", *n3, *n1, *n2);
				
			}else 
			if(*n2>*n1 && *n2>*n3 && *n3>*n1)
			{
				printf("\n A ordem � %d, %d e %d", *n1, *n3, *n2);
				
			}else 
			if(*n3>*n1 && *n3>*n2 && *n1>*n2)
			{
				printf("\n A ordem � %d, %d e %d", *n2, *n1, *n3);
				
			}else
			 if(*n3>*n1 && *n3>*n2 && *n2>*n1)
			{
				printf("\n A ordem � %d, %d e %d", *n1, *n2, *n3);
				
			}
			break;
 		
	 	}
	 	return 0;              
 			
	}
	
	//////////////////////////////FUN��O QUE VERIFICA OS VALORES E ENDERE�OS/////////////////////////
	
	int valores (int *n1, int *n2, int *n3)
{			
	printf("\n\n ---------------VALORES---------------- \n\n");
	printf("Valor *n1 = %d ", *n1);	
	printf("\t\t Valor *n2 = %d", *n2);	
	printf("\t\t Valor *n3 = %d \n", *n3);
	printf("Endere�o n1 = %X ", n1);
	printf("\t Endere�o n2 = %X", n2);
	printf("\t Endere�o n3 = %X", n3);		
	printf("\n\n --------------------------------------- \n\n");	

}
 	
 	
 	

