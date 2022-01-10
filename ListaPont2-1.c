/*
EXERCICIO 1 - LISTA DE PONTEIROS 2 DE VINICIUS ARAGAO 4323
----------------------------------------------
  1.  void inverte(char *str);
Função : Inverte a ordem dos caracteres na string str

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
	void inverte(char *str);
	char *str;
	char a[20];
	int i, j;
	
	//////////////////////////////////////APRESENTANDO A FUNÇAO//////////////////////////////////////////
	
	printf("\n\t\t\t EXERCICIO 1");
	printf("\n\n * \t Inversor de string \n\n");
	printf(" * \t coloque uma string e ela será invertida \n");
	printf("_____________________________________________________\n\n");
	
	printf(" Digite a palavra:  ");
	gets(a);												//gets atribui o que for escrito pra string a
	fflush(stdin);
	
	str= a;
	printf("%s\n", str);
	
	inverte(str);
}

//////////////////////////////////////////FUNÇAO QUE REALIZA A OPERAÇAO///////////////////////////////////
void inverte(char *str)
{
	int i, j;
	char temp;
	
	j= 0;								// j no momento é zero
	i= strlen(str) - 1;					// i é o tamanho da string (por exemplo, teste tem um tamanho de 6 (5 letras + \0)) - 1
	
	while(j<i)							//enquanto j(zero) for menor que i (string):
	{
		temp = *(str+i);				//temporario = o valor da string no maximo, no primeiro momento (teste = *str+5, letra E)
		*(str+i) = *(str+j);			// valor maximo da string = valor minimo da string (em teste = letra E = Letra T)
		*(str+j) = temp;				// valor minimo da string = temporario (em teste = letra T = letra E)
		i--;							//decrementa 1
		j++;							//incrementa 1
		
		/*são trocas duplas: 0 com 4, 1 com 3 e acabou, porque a partir daí j = i.
		 isso se repete até a metade do numero de letras da string, caso par,
		caso impar, a letra do meio se mantem igual, 
		*/
	}	
	printf("\n\n%s", str);
	
}





