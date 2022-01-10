/*
EXERCICIO 1 - LISTA DE PONTEIROS 2 DE VINICIUS ARAGAO 4323
----------------------------------------------
  1.  void inverte(char *str);
Fun��o : Inverte a ordem dos caracteres na string str

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
	
	//////////////////////////////////////APRESENTANDO A FUN�AO//////////////////////////////////////////
	
	printf("\n\t\t\t EXERCICIO 1");
	printf("\n\n * \t Inversor de string \n\n");
	printf(" * \t coloque uma string e ela ser� invertida \n");
	printf("_____________________________________________________\n\n");
	
	printf(" Digite a palavra:  ");
	gets(a);												//gets atribui o que for escrito pra string a
	fflush(stdin);
	
	str= a;
	printf("%s\n", str);
	
	inverte(str);
}

//////////////////////////////////////////FUN�AO QUE REALIZA A OPERA�AO///////////////////////////////////
void inverte(char *str)
{
	int i, j;
	char temp;
	
	j= 0;								// j no momento � zero
	i= strlen(str) - 1;					// i � o tamanho da string (por exemplo, teste tem um tamanho de 6 (5 letras + \0)) - 1
	
	while(j<i)							//enquanto j(zero) for menor que i (string):
	{
		temp = *(str+i);				//temporario = o valor da string no maximo, no primeiro momento (teste = *str+5, letra E)
		*(str+i) = *(str+j);			// valor maximo da string = valor minimo da string (em teste = letra E = Letra T)
		*(str+j) = temp;				// valor minimo da string = temporario (em teste = letra T = letra E)
		i--;							//decrementa 1
		j++;							//incrementa 1
		
		/*s�o trocas duplas: 0 com 4, 1 com 3 e acabou, porque a partir da� j = i.
		 isso se repete at� a metade do numero de letras da string, caso par,
		caso impar, a letra do meio se mantem igual, 
		*/
	}	
	printf("\n\n%s", str);
	
}





