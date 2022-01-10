/*
EXERCICIO 4 - LISTA DE PONTEIROS 2 DE VINICIUS ARAGAO 4323
----------------------------------------------
  4.  void ordena_c(int *dados, int tam);
Função : Ordena em ordem crescente os valores apontados por dados
Parametros : dados  -  ponteiro para vetor a ser ordenado
tam - numero de itens de dados
DICA : Utilize um algoritmo de ordenação conhecido, como o bubble sort ou o quick-sort
*/
#include <windows.h>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>


int main()
{
	//////////////////////////////////////CRIANDO VARIAVEIS/////////////////////////////////////
	setlocale (LC_ALL,"");
	srand(time(NULL));
	void ordena_c(int *dados, int tam);
	int vet[100], tam, i;										// vet sao os valores, tam é o tamanho de vet (até 100)
	int *dados;													// ponteiro que aponta pro vetor que contem os valores
	
	//////////////////////////////////////APRESENTANDO A FUNÇAO//////////////////////////////////////////

	printf("\n\t\t\t EXERCICIO 4");
	printf("\n\n  \t* Essa função pega nºs de um vetor de até 100 valores \n\n");
	printf(" \t * E ordena eles de forma crescente (menor pro maior) \n\n");
	
	////////////////////////////////////ATRIBUINDO VALORES/////////////////////////////////
	
	printf(" Digite o tamanho do vetor:  ");					
	scanf("%d", &tam);											// associando um valor a tam	
	fflush(stdin);
	
	if(tam< 100)												//garantindo que nao exceda 100 valores
	{	
		for(i=0; i<tam; i++)									//gerando um nª aleatorio tam vezes pro vetor
		{
			vet[i] = (rand() % 100);
  	    	printf("|%4d   ", vet[i]); 
		}

		dados = vet;											//ponteiro aponta pro vetor de tamanho tam
		printf("\n Vetor Ordenado: \n"); 
		ordena_c(dados, tam);									//chamando a funcao
	}
}

////////////////////////////////////FUNÇAO QUE REALIZA A OPERAÇAO////////////////////////////////////

void ordena_c(int *dados, int tam)
{
	int i, j, temp;								// i e j sao variaveis de contagem, temp é variavel de calculo
	
	for(i=0; i<(tam-1); i++)					// enquanto i for menor que o tamanho - 1 (explicado abaixo da função) conta i
	{
		for(j = (i+1); j<(tam); j++)
		{
			if(*(dados+i) > *(dados + j))
			{
				temp = *(dados+i);
				*(dados+i) = *(dados+j);
				*(dados+j) = temp;		
			}	
		}		
	}
	
	for(i=0; i<tam; i++)
	{
		printf("|%4d   ", *(dados+i));	
	}	
}

//////////////////////////////////////////EXPLICACAO DO CALCULO PRO CRESCENTE///////////////////////////////////////

/* 
										NUMERO QUE TESTA
	i tem que ser menor que tam - 1 pois o numero que testa só vai até o penultimo numero, por exemplo
	
				quero que o tamanho seja 4, e ele me dá esses numeros:
	
					*(dados+0) 	*(dados+1)	*(dados+2)	*(dados+3)
                     	2 			- 4 -		- 3	-		- 1
                     	
	Lembrando que 4 significa de 1 a 4, mas pro ponteiro isso fica 0 a 3, cujo tanto de variaveis é o mesmo.
	Então nos comparamos eles assim (p0 representa *(dados+0), p1 representa *(dados+1)) :
					
					p0 | p1,		p0 | p2,		p0 | p3
					p1 | p2,		p1 | p3
					p2 | p3
						
	Veja que o que compara vai até p2, p2 seria *(dados+2), sabendo que (tam - 1 -> 4 - 1 -> = 3),
	e ele parará de realizar a operação quando i deixar de ser menor que 3, ou seja, quando i 
	for 2 parará, nesse processo,i será 0, 1 e 2, de acordo com os comparadores acima.
						
									NUMERO TESTADO
	j, partindo daquele nosso teste, já tem que começar com 1 a mais que o numero que testa,
	logo j = i+1 em todos os testes. dessa vez j só parará quando deixar de ser menor que tam,
	logo j<tam máximo é 3			
*/

