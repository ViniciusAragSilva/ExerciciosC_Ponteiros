/*
EXERCICIO 5 - LISTA DE PONTEIROS 2 DE VINICIUS ARAGAO 4323
----------------------------------------------
  5.  void ordena(int *dados, int tam, char ordem);
Função : Ordena em ordem desejada os valores apontados por dados
Parametros : dados  -  ponteiro para vetor a ser ordenado
tamanho - numero de itens de dados
ordem - ‘c’  para ordenamento crescente, ‘d’ para ordenamento decrescente.
Case insensitive - não importa se é maiuscula ou minuscula
Padrão é ordenamento crescente.
DICA : Utilize um algoritmo de ordenação conhecido, como o bubble sort ou o quick-sort

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
	
	//////////////////////////////////////CRIANDO VARIAVEIS/////////////////////////////////////
	
	setlocale (LC_ALL,"");
	srand(time(NULL));
	void ordena(int *dados, int tam, char ordem);
	int vet[100], tam, i;										// vet sao os valores, tam é o tamanho de vet (até 100)
	int *dados;		
	char ordem;

	printf("\n\t\t\t EXERCICIO 5");
	printf("\n\n * \t Essa função pega nºs de um vetor de até 100 valores \n\n");
	printf("\t * E ordena eles de forma crescente ou decrescente, de acordo com o pedido \n\n");

	////////////////////////////////////ATRIBUINDO VALORES/////////////////////////////////
	
	printf(" Digite o tamanho do vetor:  ");					
	scanf("%d", &tam);											// associando um valor a tam	
	fflush(stdin);
	
	if(tam<= 100)												//garantindo que nao exceda 100 valores
	{	
		i=0;
		for(i=0; i<tam; i++)									//gerando um nª aleatorio tam vezes pro vetor
		{
			vet[i] = (rand() % 100);
  	    	printf("|%4d   ", vet[i]); 
		}
	
		dados = vet;											//ponteiro aponta pro vetor de tamanho tam
	
		printf("\n\n Digite a operação desejada:  ");					
		scanf("%c", &ordem);
		fflush(stdin);
	
		printf("\n Vetor Ordenado: \n");
		
		switch(ordem)
		{
			case 'c': case 'C':case 'd': case 'D':
				ordena(dados, tam, ordem);
		}	
 	}
}

////////////////////////////////////FUNÇAO QUE REALIZA A OPERAÇAO////////////////////////////////////

void ordena(int *dados, int tam, char ordem)
{
	
		int i, j, temp;
	
	for(i=0; i<(tam-1); i++)
	{
		for(j = (i+1); j<(tam); j++)
		{
			
			switch(ordem)
			{
				case 'c': case 'C':
					
					if(*(dados+i) > *(dados + j))
					{
						temp = *(dados+i);
						*(dados+i) = *(dados+j);
						*(dados+j) = temp;
							
					}
				break;	
				
				case 'd': case 'D':	
					if(*(dados+i) < *(dados + j))
					{
						temp = *(dados+i);
						*(dados+i) = *(dados+j);
						*(dados+j) = temp;	
							
					}
				break;
			}	
		}		
	}
	
	for(i=0; i<tam; i++)
	{
		printf("|%4d   ", *(dados+i));	
	}	
	
}



