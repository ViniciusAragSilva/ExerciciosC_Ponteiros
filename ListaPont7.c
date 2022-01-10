/*
EXERCICIO 7 - LISTA DE PONTEIROS DE VINICIUS ARAGAO 4323
----------------------------------------------
  7. void ordena_alfa (char *p1, char *p2 );
Fun��o :coloca as palavras p1 e p2 em ordem alfab�tica
Par�metros :  p1 e p2 - duas strings a serem ordenadas
Dica : use a fun��o strcmp();

*/
#include <windows.h>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
#include <string.h>


 int main()
{
	
	setlocale (LC_ALL,"");
	srand(time(NULL));

	void ordena_alfa (char *p1, char *p2 );					//fun��o que ordena as palavras
	char *p1, *p2;											
	char a[20], b[20];
	
	printf("\n\t\t\t EXERCICIO 7 ");
	printf("\n\n * \t Ser� feita uma compara��o entre duas palavras - m�ximo de 20 letras \n\n");
	printf(" * \t Para orden�-las em ordem alfab�tica \n\n");
	printf("\n____________________________________________________________________\n\n");

//////////////////////////////////////INSERINDO AS PALAVRAS/////////////////////////////////////
	
	printf(" Digite a primeira palavra:  ");
	gets(a);												//gets atribui o que for escrito pra string a
	fflush(stdin);
	p1= a;													//p1, sem * � o endere�o, a sem [] � o endere�o, atribuindo endere�o se atribui os valores (*p1 = a[0], *(p1 + 1) = a[1]...)
	
	printf("\n Digite a segunda palavra:  ");
	gets(b);
	fflush(stdin);
	p2 = b;
	
	ordena_alfa (p1, p2);
	
}

////////////////////////////////////OPERA�AO REQUISITADA///////////////////////////////////////////////
void ordena_alfa (char *p1, char *p2 )
{
	int i;
	i=strcmp(p1, p2);										//compara strings, se o primeiro valor de p1 diferente de p2 for maior, d� -1. se for menor, d� +1, se for tudo igual, d� 0
	printf("\n %d", i);
	printf("\n-----------------------------------------------------------\n");
	
	if(i< 0)														
	{
		printf("\n primeiro >%s<, depois >%s< \n", p1, p2);
		
	}else if (i == 0)
	{
		printf("\n >%s< e >%s< s�o iguais \n", p1, p2);
		
	}else if(i> 0)
	{
		printf("\n primeiro >%s<, depois >%s< \n", p2, p1);
	}
}



