/*
EXERCICIO 3 - LISTA DE PONTEIROS 2 DE VINICIUS ARAGAO 4323
----------------------------------------------
  3.  void par_impar(int *vet, int tam, int *p,  int *np, int *imp, int *nimp);
Função : Copia os valores pares de vetor para par e valores impares para impar
Parametros : vetor  -  ponteiro para variavel de entrada de dados
tamanho - numero de itens de vetor
*par - ponteiro para vetor que armazena valores pares
*npar - numero de valores copiados para par
impar - ponteiro para vetor que armazena valores impares
*nimpar - numero de valores copiados para par

DICA : declare variável para armazenar os dados apontados por par e impar no programa
principal.

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
	void par_impar(int *vet, int tam, int *p,  int *np, int *imp, int *nimp);
	int vetor[100],par[100], impar[100], tam, i, npar, nimpar;
	int *vet, *p, *np, *imp, *nimp;
	
	//////////////////////////////////////APRESENTANDO A FUNÇAO//////////////////////////////////////////
	
	printf("\n\t\t\t EXERCICIO 3");
	printf("\n\n * \t Essa função pega os nºs de um vetor  de até 100 valores \n\n");
	printf(" * \t   e separa eles em pares e impares \n\n");
	
	////////////////////////////////////ATRIBUINDO VALORES/////////////////////////////////
	
	printf(" Digite o tamanho do vetor:  ");
	scanf("%d", &tam);								//tam							
	fflush(stdin);
	
	printf("\n \t Vetor Original:  \n");
	i= 0;											//i
	while(i<tam && tam< 100)					
	{
		vetor[i] = (rand() % 100);
        printf("|%4d   ", vetor[i]); 
        i++;
	}
	
	vet = vetor;
	p = par;
	imp = impar;

	par_impar(vet, tam, p, np, imp, nimp);

}

void par_impar(int *vet, int tam, int *p,  int *np, int *imp, int *nimp)
{
		int j= 0, k= 0, l= 0;
		int j1, k1, l1;

		
	while(j<tam)
	{
	 
		if(*(vet+j) % 2 == 0)	
		{
			*(p+k) = *(vet+j);			
			k++;							
		}else
		{
			*(imp + l) = *(vet+j);
			l++;	
		}
  	   	j++;									
	}
	
	np = &k;
	nimp = &l;
	
			
	
	printf("\n \t Vetor dos Pares:   \n");
	
	for(k1=0; k1 < *(np); k1++)
	{
		printf("|%4d   ", *(p+k1));
	}
	
	printf("\n\n \t Vetor dos Impares:   \n");
	
	for(l1=0; l1 < *(nimp); l1++)
	{
		printf("|%4d   ", *(imp+l1));
	}
	
		
	
}






