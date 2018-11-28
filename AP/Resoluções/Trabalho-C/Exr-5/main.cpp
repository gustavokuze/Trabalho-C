#include <stdio.h>
#include <stdlib.h>

//prototipagem
void flush();
int contar_iterativamente(int ini, int fim);
int contar_recursivamente(int *ini, int fim, int *contador);

int main() { 

	//Declara��o das vari�veis e dos ponteiros 
	int inicio = 0, 
		final = 0, 
		contador = 0,
		resultado_itera = 0,
		resultado_recurs = 0,
		*p_contador,
		*p_inicio,
		*p_final;
	
	//atribui��o dos ponteiros aos endere�os de mem�ria das vari�veis
	p_contador = &contador;
	p_inicio = &inicio;
	p_final = &final;

	//requisi��o dos valores ao usu�rio, recolhidos atrav�s dos ponteiros
	printf("Digite o numero de inicio: ");
	scanf_s("%d", p_inicio);
	printf("\nDigite o numero final: ");
	scanf_s("%d", p_final);

	//atribui��o do retorno da fun��o iterativa � vari�vel resultado_itera
	resultado_itera = contar_iterativamente(inicio, final);
	//atribui��o do retorno da fun��o recursiva � vari�vel resultado_recurs
	resultado_recurs = contar_recursivamente(p_inicio, final, p_contador);
	
	//impress�o de ambos os resultados na tela
	printf("\n\n++++++++++\n\nResultado iterativo: %d\n", resultado_itera);
	printf("\nResultado recursivo: %d\n\n", resultado_recurs);

	system("pause");

	return 0;
}


int contar_iterativamente(int ini, int fim) {
	//declara��o das vari�veis de itera��o e contagem
	int i, contador = 0;

	//faz a itera��o desde o valor da vari�vel ini at� a vari�vel fim
	for (i = ini; i < fim; i++)
	{
		contador++; //Incrementa o valor de contador em um
		printf("\n Contador iterativo ===> %d ", contador); //imprime na tela o valor atual de contador
	}
	return contador; //retorna o valor de contador como sendo a diferen�a entre ini e fim
}


int contar_recursivamente(int *ini, int fim, int *contador) {

	// caso o ponteiro ini (j�) tenha seu valor identico ao da vari�vel fim, retorne o valor do ponteiro contador
	if (*ini == fim) 
		return *contador;
	*contador += 1; // acrescenta 1 ao valor do ponteiro
	*ini += 1;

	printf("\n Contador recursivo ===> %d ", *contador); //imprime na tela o valor atual de *contador

	return contar_recursivamente(ini, fim, contador); //retorna uma nova chamada � fun��o, fazendo assim a recursividade
}

// m�todo para a limpeza de buffer do teclado
void flush() {
	char c;
	while ((c = getchar()) != '\n' && c != EOF) {}
}


/*

Fa�a um algoritmo em linguagem C que contenha dois n�meros inteiros digitados na
tela pelo usu�rio:
a. O primeiro n�mero marca um in�cio;
b. O segundo n�mero marca um fim;
O algoritmo vai contar quantos n�meros existem entre o in�cio (primeira entrada) e
o fim (segunda entrada). A impress�o na tela do usu�rio deve ser realizada de duas formas:
a. Iterativa;
b. Recursiva;
Ao colocar no seu relat�rio uma imagem do seu c�digo funcionando, coloque ele
rodando utilizando como valor de inicio os 2 �ltimos valores do seu RU e valor final
o n�mero 99.

*/