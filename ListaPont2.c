/*
EXERCICIO 2 - LISTA DE PONTEIROS DE VINICIUS ARAGAO 4323
----------------------------------------------
  2.  void troca (int *p1, int *p2);
Função : coloca o valor de p2 em p1 e visce-versa
Parametros : parametros para as variaveis a serem trocadas

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
	
	int *p1, *p2;	//ponteiros p1 e p2 que apontam para alguma variável
	int a, b;		//variaveis int a e b
	printf("\n\t\t\t EXERCICIO 2 ");
	printf("\n\n * \t Coloque dois valores em 2 variaveis e eles serão trocados");
	printf("\n\n -----------------------------------------------------------------\n\n");

//////////atribuição dos valores//////////////////////////

	printf(" * \t  Valor a: ");
	scanf("%d", &a);				//aqui dizemos um valor e jogamos ele no endereço de a
	printf(" * \t  Valor b: ");
	scanf("%d", &b);				// --

	p1= &a;			//aqui definimos que o endereço de *p1 é igual o endereço de a, fazendo eles terem o mesmo valor consequentemente 
	p2= &b;			// --
	printf("\t Endereço a = %X \n", &a);
	printf("\t Endereço b = %X \n", &b);	
	valores(p1, p2);

	troca(p1, p2);
	
	valores(p1, p2);

}

///////////////////////////////FUNÇÃO QUE REALIZA A TROCA/////////////////////////////////////

int troca(int *p1, int*p2)
{
	int i;
	i = *p1;	//aqui dizemos que i é o valor de p1
	*p1 = *p2;	//aqui o valor de p1 troca pro valor de p2
	*p2 = i;	//aqui o valor de p2 troca pro valor de i (que é o de p1 antes da troca da linha anterior)
	printf(" * \t  Novo valor de p1 é %d \n", *p1);
	printf(" * \t  Novo valor de p2 é %d \n", *p2);
	return *p1, *p2;
}

//////////////////////////////FUNÇÃO QUE VERIFICA OS VALORES E ENDEREÇOS/////////////////////////

int valores (int *p1, int *p2)
{			
	printf("\n\n ---------------VALORES---------------- \n\n");
	printf("Valor *p1 = %d ", *p1);	
	printf("\t\t Valor *p2 = %d \n", *p2);	
	printf("Endereço p1 = %X ", p1);
	printf("\t Endereço p2 = %X", p2);	
	printf("\n\n --------------------------------------- \n\n");	

}






