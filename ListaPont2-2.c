/*
EXERCICIO 2 - LISTA DE PONTEIROS 2 DE VINICIUS ARAGAO 4323
----------------------------------------------
  2.   int vetorpares (int *vetor, int tamanho, int *p);
Fun��o : Copia os valores pares de vetor para p.
Parametros : p - ponteiro para vetor de numeros pares
vetor - ponteiro para vetor com todos os numeros
tamanho - numero de itens de vetor
Retorno : quantidade de valores copiados para p.
DICA : declare vari�vel para armazenar os dados apontados por p no programa principal.

*/
#include <windows.h>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>


int main()
{
	//////////////////////////////////////CRIANDO VARIAVEIS//////////////////////////////////////////
	
	setlocale (LC_ALL,"");
	srand(time(NULL));
	int vetorpares (int *vetor, int tam, int *p);						//fun��o que pega os numeros pares
	int vet[100],par[100], tam, i;										// vet, de no maximo 100, armazena os numeros, par armazena os pares, tam armazena o tamanho de vet, e i � variavel de controle
	int *vetor, *p;														//ponteiros de vet e de par
 		
	//////////////////////////////////////APRESENTANDO A FUN�AO//////////////////////////////////////////	
 		
	printf("\n\t\t\t EXERCICIO 2");
	printf("\n\n * \t Copia pares  \n\n");
	printf(" * \t Essa fun��o pega n�s de um vetor com dado tamanho (de no m�ximo 100) \n");
	printf(" * \t E copia s� os numeros pares desse vetor para outro \n");
	printf("_________________________________________________________________________\n\n");

	////////////////////////////////////ATRIBUINDO VALORES/////////////////////////////////
	
	printf(" Digite o tamanho do vetor:  ");
	scanf("%d", &tam);								//atribui um tamanho do vetor, que tera tam numeros
	fflush(stdin);
	
	printf("\n Vetor 1:  \n");
	i=0;
	while(i<tam && tam< 100)						//enquanto i for menor que tam E tam � menor que 100
	{
		vet[i] = (rand()%100);						//vet, na posi��o i, � igual um numero randomico entre 0 e 99
        printf("|%4d   ", vet[i]); 
        i++;										//incrementa o i at� ele chegar a tam
	}
	
	vetor = vet;									//associando o ponteiro vetor ao vetor vet
	p = par;										//DICA sendo seguida, infelizmente demorei certo tempo pra me tocar no que aconteceu kkkkk
	
	printf("\n Vetor 2:  \n");
	
	vetorpares(vetor, tam, p);

}

//////////////////////////////////////////FUN�AO QUE REALIZA A OPERA�AO///////////////////////////////////

int vetorpares (int *vetor, int tam, int *p)
{
	int j= 0, k= 0;									//j controla o ponteiro do vetor, k controla o ponteiro dos pares

		
	while(j<tam)
	{
	 
		if(*(vetor+j) % 2 == 0)						//verificando se o numero � par
		{
			*(p+k) = *(vetor+j);					//pra *(p+k) funcionar, p precisa apontar pra algo, no caso a dica que foi seguida 
			printf("|%4d   ", *(p+k));
			k++;									//incrementa k (posi��o do *p)
		}	
  	   	j++;										//incrementa j (posi��o do vetor)
	}		
	return k;										//retorna k (ultima posi��o dos numeros pares e tamb�m seu tamanho
		
}




