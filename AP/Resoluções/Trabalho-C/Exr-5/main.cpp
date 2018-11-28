#include <stdio.h>
#include <stdlib.h>

//prototipagem
void flush();
int contar_iterativamente(int ini, int fim);
int contar_recursivamente(int *ini, int fim, int *contador);

int main() { 

	//Declaração das variáveis e dos ponteiros 
	int inicio = 0, 
		final = 0, 
		contador = 0,
		resultado_itera = 0,
		resultado_recurs = 0,
		*p_contador,
		*p_inicio,
		*p_final;
	
	//atribuição dos ponteiros aos endereços de memória das variáveis
	p_contador = &contador;
	p_inicio = &inicio;
	p_final = &final;

	//requisição dos valores ao usuário, recolhidos através dos ponteiros
	printf("Digite o numero de inicio: ");
	scanf_s("%d", p_inicio);
	printf("\nDigite o numero final: ");
	scanf_s("%d", p_final);

	//atribuição do retorno da função iterativa à variável resultado_itera
	resultado_itera = contar_iterativamente(inicio, final);
	//atribuição do retorno da função recursiva à variável resultado_recurs
	resultado_recurs = contar_recursivamente(p_inicio, final, p_contador);
	
	//impressão de ambos os resultados na tela
	printf("\n\n++++++++++\n\nResultado iterativo: %d\n", resultado_itera);
	printf("\nResultado recursivo: %d\n\n", resultado_recurs);

	system("pause");

	return 0;
}


int contar_iterativamente(int ini, int fim) {
	//declaração das variáveis de iteração e contagem
	int i, contador = 0;

	//faz a iteração desde o valor da variável ini até a variável fim
	for (i = ini; i < fim; i++)
	{
		contador++; //Incrementa o valor de contador em um
		printf("\n Contador iterativo ===> %d ", contador); //imprime na tela o valor atual de contador
	}
	return contador; //retorna o valor de contador como sendo a diferença entre ini e fim
}


int contar_recursivamente(int *ini, int fim, int *contador) {

	// caso o ponteiro ini (já) tenha seu valor identico ao da variável fim, retorne o valor do ponteiro contador
	if (*ini == fim) 
		return *contador;
	*contador += 1; // acrescenta 1 ao valor do ponteiro
	*ini += 1;

	printf("\n Contador recursivo ===> %d ", *contador); //imprime na tela o valor atual de *contador

	return contar_recursivamente(ini, fim, contador); //retorna uma nova chamada à função, fazendo assim a recursividade
}

// método para a limpeza de buffer do teclado
void flush() {
	char c;
	while ((c = getchar()) != '\n' && c != EOF) {}
}


/*

Faça um algoritmo em linguagem C que contenha dois números inteiros digitados na
tela pelo usuário:
a. O primeiro número marca um início;
b. O segundo número marca um fim;
O algoritmo vai contar quantos números existem entre o início (primeira entrada) e
o fim (segunda entrada). A impressão na tela do usuário deve ser realizada de duas formas:
a. Iterativa;
b. Recursiva;
Ao colocar no seu relatório uma imagem do seu código funcionando, coloque ele
rodando utilizando como valor de inicio os 2 últimos valores do seu RU e valor final
o número 99.

*/