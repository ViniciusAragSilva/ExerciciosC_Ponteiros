/*
EXERCICIO 2 - LISTA DE PONTEIROS DE VINICIUS ARAGAO 4323
----------------------------------------------
  2.  void troca (int *p1, int *p2);
Fun��o : coloca o valor de p2 em p1 e visce-versa
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
	
	int *p1, *p2;	//ponteiros p1 e p2 que apontam para alguma vari�vel
	int a, b;		//variaveis int a e b
	printf("\n\t\t\t EXERCICIO 2 ");
	printf("\n\n * \t Coloque dois valores em 2 variaveis e eles ser�o trocados");
	printf("\n\n -----------------------------------------------------------------\n\n");

//////////atribui��o dos valores//////////////////////////

	printf(" * \t  Valor a: ");
	scanf("%d", &a);				//aqui dizemos um valor e jogamos ele no endere�o de a
	printf(" * \t  Valor b: ");
	scanf("%d", &b);				// --

	p1= &a;			//aqui definimos que o endere�o de *p1 � igual o endere�o de a, fazendo eles terem o mesmo valor consequentemente 
	p2= &b;			// --
	printf("\t Endere�o a = %X \n", &a);
	printf("\t Endere�o b = %X \n", &b);	
	valores(p1, p2);

	troca(p1, p2);
	
	valores(p1, p2);

}

///////////////////////////////FUN��O QUE REALIZA A TROCA/////////////////////////////////////

int troca(int *p1, int*p2)
{
	int i;
	i = *p1;	//aqui dizemos que i � o valor de p1
	*p1 = *p2;	//aqui o valor de p1 troca pro valor de p2
	*p2 = i;	//aqui o valor de p2 troca pro valor de i (que � o de p1 antes da troca da linha anterior)
	printf(" * \t  Novo valor de p1 � %d \n", *p1);
	printf(" * \t  Novo valor de p2 � %d \n", *p2);
	return *p1, *p2;
}

//////////////////////////////FUN��O QUE VERIFICA OS VALORES E ENDERE�OS/////////////////////////

int valores (int *p1, int *p2)
{			
	printf("\n\n ---------------VALORES---------------- \n\n");
	printf("Valor *p1 = %d ", *p1);	
	printf("\t\t Valor *p2 = %d \n", *p2);	
	printf("Endere�o p1 = %X ", p1);
	printf("\t Endere�o p2 = %X", p2);	
	printf("\n\n --------------------------------------- \n\n");	

}






