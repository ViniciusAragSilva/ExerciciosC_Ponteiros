/*
EXERCICIO 7 - LISTA DE PONTEIROS DE VINICIUS ARAGAO 4323
----------------------------------------------
  7. void ordena_alfa (char *p1, char *p2 );
Função :coloca as palavras p1 e p2 em ordem alfabética
Parâmetros :  p1 e p2 - duas strings a serem ordenadas
Dica : use a função strcmp();

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

	void ordena_alfa (char *p1, char *p2 );					//função que ordena as palavras
	char *p1, *p2;											
	char a[20], b[20];
	
	printf("\n\t\t\t EXERCICIO 7 ");
	printf("\n\n * \t Será feita uma comparação entre duas palavras - máximo de 20 letras \n\n");
	printf(" * \t Para ordená-las em ordem alfabética \n\n");
	printf("\n____________________________________________________________________\n\n");

//////////////////////////////////////INSERINDO AS PALAVRAS/////////////////////////////////////
	
	printf(" Digite a primeira palavra:  ");
	gets(a);												//gets atribui o que for escrito pra string a
	fflush(stdin);
	p1= a;													//p1, sem * é o endereço, a sem [] é o endereço, atribuindo endereço se atribui os valores (*p1 = a[0], *(p1 + 1) = a[1]...)
	
	printf("\n Digite a segunda palavra:  ");
	gets(b);
	fflush(stdin);
	p2 = b;
	
	ordena_alfa (p1, p2);
	
}

////////////////////////////////////OPERAÇAO REQUISITADA///////////////////////////////////////////////
void ordena_alfa (char *p1, char *p2 )
{
	int i;
	i=strcmp(p1, p2);										//compara strings, se o primeiro valor de p1 diferente de p2 for maior, dá -1. se for menor, dá +1, se for tudo igual, dá 0
	printf("\n %d", i);
	printf("\n-----------------------------------------------------------\n");
	
	if(i< 0)														
	{
		printf("\n primeiro >%s<, depois >%s< \n", p1, p2);
		
	}else if (i == 0)
	{
		printf("\n >%s< e >%s< são iguais \n", p1, p2);
		
	}else if(i> 0)
	{
		printf("\n primeiro >%s<, depois >%s< \n", p2, p1);
	}
}



