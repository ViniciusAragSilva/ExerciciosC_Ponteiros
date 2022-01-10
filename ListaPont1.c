/*
EXERCICIO 1 - LISTA DE PONTEIROS DE VINICIUS ARAGAO 4323
-----------------------------------
1. Qual � o resultado do seguinte programa?
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
	O endere�o de uma vari�vel � dado pelo operador &.
	Assim, se i � uma vari�vel, &i � o seu endere�o.
	(N�o confunda esse uso de & com o operador l�gico AND, que se escreve && em C.)
	*/
	
f = vet;	//f sem o asterisco � o endere�o, vet sem o [] � o endere�o, atribuindo um endere�o ao outro, *f = vet[0], logo *(f+1) = vet[1]... 
printf("contador / valor / valor / endereco / endereco");
for(i = 0 ; i <= 4 ; i++)
{
printf("\ni = %d ",i);						// diz em qual posi��o est� o contador 
printf(" vet[%d] = %.1f ",i, vet[i]);		//diz qual o valor de vet de acordo com o numero do contador
printf(" *(f + %d) = %.1f ",i, *(f+i));		//diz qual o valor que o ponteiro f alocou na memoria, de acordo com o numero do contador
printf(" &vet[%d] = %X ",i, &vet[i]);		//aqui diz em qual lugar da memoria (codigo) est� o valor de vet, de acordo com o numero do contador
printf(" (f + %d) = %X ",i, f+i);			//aqui diz em qual lugar da memoria est� o valor de f, de acordo com o numero do contador
}
}

/*
	Se um ponteiro p armazena o endere�o de i,
	p= &i
podemos dizer  p aponta para i  ou  p � o endere�o de i. 
(Em termos um pouco mais abstratos, diz-se que p � uma refer�ncia � vari�vel i.)  
Se um ponteiro p tem valor diferente de NULL ent�o

					*p	

	� o valor da vari�vel apontada por p.  
(N�o confunda esse operador * com o operador de multiplica��o!)  
Por exemplo, se i � uma vari�vel e p vale &i ent�o dizer *p � o mesmo que dizer i.
		
		p= &i quer dizer que *p = i
		
p guarda o endere�o de i, que � &i, *p guarda o valor do endere�o, ou seja, o valor de i
*/


