/*
EXERCICIO 4 - LISTA DE PONTEIROS 3 DE VINICIUS ARAGAO 4323
----------------------------------------------
  4.  void m_ordena_linha(int *dados, int lin, int col);
Função : Ordena em ordem crescente os valores de cada linha da matriz dados
Cada linha deve ser ordenada independente das demais.
Parametros : dados  -  ponteiro para vetor a ser ordenado
lin, col - numero de linhas e colunas de dados
DICA : Utilize um algoritmo de ordenação conhecido, como o bubble sort ou o quick-sort

*/
#include <windows.h>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>



int main()
{
	////////////////////////////////////CRIANDO VARIAVEIS/////////////////////////////////////

	setlocale (LC_ALL,"");
	srand(time(NULL));
	void m_ordena_linha(int *dados, int lin, int col);
	int matriz[10][10], c, l;								   	// a matriz, c = coluna, l = linha, k = nª escalar		
	int i, j;														// variaveis de controle
	int *dados;														//pointer da matriz
	
	//////////////////////////////////////APRESENTANDO A FUNÇAO/////////////////////////////

	printf("\n\t\t\t EXERCICIO 4");
	printf("\n\n * \t  Essa função pega nºs de uma matriz de até 100 valores (10 l 10 c) \n\n");
	printf(" * \t  E ordena cada linha em ordem crescente	\n");
	printf("______________________________________________________________________\n");	
	
	////////////////////////////////////ATRIBUINDO VALORES/////////////////////////////////
	
	printf("\n Digite o numero de linhas:  ");					
	scanf("%d", &l);			
	fflush(stdin);
	printf("\n Digite o numero de colunas:  ");					
	scanf("%d", &c);			
	fflush(stdin);
	
		printf("\n Matriz gerada: \n");	
	
	if(c<=10 && l<=10)									
	{	
		
		for(i=0; i< l; i++)											//correndo as linhas
		{	
			for(j=0; j< c; j++)										//correndo as colunas
			{
				matriz[i][j] = (rand() % 100);						//nª aleatorio pra cada valor
				printf("|%4d   ", matriz[i][j]);		
			}
			printf("\n");
		}


		printf("\n\n Matriz ordenada: \n");

		dados = &matriz[0][0];									//apontando para o endereço do primeiro elemento da matriz
		
		m_ordena_linha(dados, l, c);
	
	}
	
}

////////////////////////////////////FUNÇAO QUE REALIZA A OPERAÇAO////////////////////////////////////

/*
 similar ao programa ListaPont2-4, onde é feito a ordem crescente dos valores
baseando-se num sistema de colunas e linhas, aqui usaremos esse sistema em cada
coluna da matriz, resultando em 3 laços FOR.
*/

void m_ordena_linha(int *dados, int lin, int col)
{
	int i, j, k, temp;								// i e j sao variaveis de contagem, temp é variavel de calculo
	
	for(i=0; i<lin; i++)					// enquanto i for menor que o tamanho - 1 (explicado abaixo da função) conta i
	{
		
		 //////numero que testa
		for(j=0; j<(col-1); j++)					// enquanto i for menor que a coluna - 1 (explicado abaixo da função) conta i
		{
		////// numero que é testado
			for(k = (j+1); k< col ; k++)
			{
				
				
				if(dados[10*i +j] > dados[10*i +k] )	//comparando o numero que testa com o numero testado
				{
					temp = dados[10*i +j];
					dados[10*i +j] = dados[10*i +k];
					dados[10*i +k] = temp;		
				}
				
					
			}		
		}
		
	}
	
	for(j=0; j<lin; j++)
	{
		for(k = 0; k< col ; k++)
		{
			printf("|%4d   ", dados[10*j +k]);
		}	
		printf("\n");	
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
	Então nos comparamos eles assim (p0 representa *(dados+0), p1 representa *(dados+1))... :
					
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







