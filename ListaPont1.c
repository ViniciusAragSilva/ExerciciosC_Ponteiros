/*
EXERCICIO 1 - LISTA DE PONTEIROS DE VINICIUS ARAGAO 4323
-----------------------------------
1. Qual é o resultado do seguinte programa?
*/
#include <windows.h>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>


int main(void)
{
float vet[5] = {1.1,2.2,3.3,4.4,5.5};
float *f;	//Ponteiro foi criado
int i;	
	
	/*
	O endereço de uma variável é dado pelo operador &.
	Assim, se i é uma variável, &i é o seu endereço.
	(Não confunda esse uso de & com o operador lógico AND, que se escreve && em C.)
	*/
	
f = vet;	//f sem o asterisco é o endereço, vet sem o [] é o endereço, atribuindo um endereço ao outro, *f = vet[0], logo *(f+1) = vet[1]... 
printf("contador / valor / valor / endereco / endereco");
for(i = 0 ; i <= 4 ; i++)
{
printf("\ni = %d ",i);						// diz em qual posição está o contador 
printf(" vet[%d] = %.1f ",i, vet[i]);		//diz qual o valor de vet de acordo com o numero do contador
printf(" *(f + %d) = %.1f ",i, *(f+i));		//diz qual o valor que o ponteiro f alocou na memoria, de acordo com o numero do contador
printf(" &vet[%d] = %X ",i, &vet[i]);		//aqui diz em qual lugar da memoria (codigo) está o valor de vet, de acordo com o numero do contador
printf(" (f + %d) = %X ",i, f+i);			//aqui diz em qual lugar da memoria está o valor de f, de acordo com o numero do contador
}
}

/*
	Se um ponteiro p armazena o endereço de i,
	p= &i
podemos dizer  p aponta para i  ou  p é o endereço de i. 
(Em termos um pouco mais abstratos, diz-se que p é uma referência à variável i.)  
Se um ponteiro p tem valor diferente de NULL então

					*p	

	é o valor da variável apontada por p.  
(Não confunda esse operador * com o operador de multiplicação!)  
Por exemplo, se i é uma variável e p vale &i então dizer *p é o mesmo que dizer i.
		
		p= &i quer dizer que *p = i
		
p guarda o endereço de i, que é &i, *p guarda o valor do endereço, ou seja, o valor de i
*/


