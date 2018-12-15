#include <stdlib.h>
#include <stdio.h>

int main() {

	/*Declaração da variável que irá conter a primeira letra do nome, do tipo char, inicializada com o sinal de subtração (-) */
	char primeira_letra_do_nome = '-',

		/*declaração do ponteiro que irá armazenar o endereço de memória da variável primeira_letra_do_nome*/
		*p_primeira_letra_do_nome;

	/*Declaração da variável que irá conter os dois ultimos digitos do RU, do tipo int, inicializada com o valor zero*/
	int ultimos_2_digitos_ru = 0,

		/*declaração do ponteiro que irá armazenar o endereço de memória da variável ultimos_2_digitos_ru*/
		*p_ultimos_2_digitos_ru;


	//Declaração da variável que irá conter os quatro ultimos digitos do RU, do tipo float, inicializada com o valor zero
	float ultimos_4_digitos_ru = 0,

		/*declaração do ponteiro que irá armazenar o endereço de memória da variável ultimos_4_digitos_ru*/
		*p_ultimos_4_digitos_ru;


	/*Aqui é feita a atribuição do endereço de memória das variáveis a seus respectivos ponteiros*/
	p_primeira_letra_do_nome = &primeira_letra_do_nome;
	p_ultimos_2_digitos_ru = &ultimos_2_digitos_ru;
	p_ultimos_4_digitos_ru = &ultimos_4_digitos_ru;


	/*Aqui é mostrado o valor inicial das variáveis na tela*/
	printf("\nValor inicial da variavel \"primeira_letra_do_nome\": %c.\n", primeira_letra_do_nome);
	printf("\nValor inicial da variavel \"ultimos_2_digitos_ru\": %d.\n", ultimos_2_digitos_ru);
	printf("\nValor inicial da variavel \"ultimos_4_digitos_ru\": %.2f.\n", ultimos_4_digitos_ru);


	//atribuição dos valores às variáveis através dos ponteiros
	*p_primeira_letra_do_nome = 'G';
	*p_ultimos_2_digitos_ru = 66;
	*p_ultimos_4_digitos_ru = 10.66;


	/* Aqui são mostrados os valores das variáveis após a atribuição por referência*/
	printf("\n\nValor da variavel \"primeira_letra_do_nome\" apos a atribuicao por referencia: %c.\n", primeira_letra_do_nome);
	printf("\nValor da variavel \"ultimos_2_digitos_ru\" apos a atribuicao por referencia: %d.\n", ultimos_2_digitos_ru);
	printf("\nValor da variavel \"ultimos_4_digitos_ru\" apos a atribuicao por referencia: %.2f.\n", ultimos_4_digitos_ru);

	system("pause");
	return 0;
}



/*
Exercício 1:
Escreva um algoritmo em linguagem C com as seguintes instruções:
1. Declare três variáveis (inteiro, real e char);
2. Declare três ponteiros;
3. Associe as variáveis aos ponteiros;
4. Modifique os valores de cada variável indiretamente usando os ponteiros
associados. Para armazenar os valores nas variáveis, armazene na variável
char a primeira letra do seu nome, na variável inteira os dois últimos dígitos
do seu RU e na variável real os 4 últimos dígitos do seu RU, sendo os 2
últimos os valores com virgula;
5. Imprima na tela os valores das variáveis antes e após a modificação.

*/