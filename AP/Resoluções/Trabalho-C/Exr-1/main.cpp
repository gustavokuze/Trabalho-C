#include <stdlib.h>
#include <stdio.h>

int main() {

	/*Declara��o da vari�vel que ir� conter a primeira letra do nome, do tipo char, inicializada com o sinal de subtra��o (-) */
	char primeira_letra_do_nome = '-',

		/*declara��o do ponteiro que ir� armazenar o endere�o de mem�ria da vari�vel primeira_letra_do_nome*/
		*p_primeira_letra_do_nome;

	/*Declara��o da vari�vel que ir� conter os dois ultimos digitos do RU, do tipo int, inicializada com o valor zero*/
	int ultimos_2_digitos_ru = 0,

		/*declara��o do ponteiro que ir� armazenar o endere�o de mem�ria da vari�vel ultimos_2_digitos_ru*/
		*p_ultimos_2_digitos_ru;


	//Declara��o da vari�vel que ir� conter os quatro ultimos digitos do RU, do tipo float, inicializada com o valor zero
	float ultimos_4_digitos_ru = 0,

		/*declara��o do ponteiro que ir� armazenar o endere�o de mem�ria da vari�vel ultimos_4_digitos_ru*/
		*p_ultimos_4_digitos_ru;


	/*Aqui � feita a atribui��o do endere�o de mem�ria das vari�veis a seus respectivos ponteiros*/
	p_primeira_letra_do_nome = &primeira_letra_do_nome;
	p_ultimos_2_digitos_ru = &ultimos_2_digitos_ru;
	p_ultimos_4_digitos_ru = &ultimos_4_digitos_ru;


	/*Aqui � mostrado o valor inicial das vari�veis na tela*/
	printf("\nValor inicial da variavel \"primeira_letra_do_nome\": %c.\n", primeira_letra_do_nome);
	printf("\nValor inicial da variavel \"ultimos_2_digitos_ru\": %d.\n", ultimos_2_digitos_ru);
	printf("\nValor inicial da variavel \"ultimos_4_digitos_ru\": %.2f.\n", ultimos_4_digitos_ru);


	//atribui��o dos valores �s vari�veis atrav�s dos ponteiros
	*p_primeira_letra_do_nome = 'G';
	*p_ultimos_2_digitos_ru = 66;
	*p_ultimos_4_digitos_ru = 10.66;


	/* Aqui s�o mostrados os valores das vari�veis ap�s a atribui��o por refer�ncia*/
	printf("\n\nValor da variavel \"primeira_letra_do_nome\" apos a atribuicao por referencia: %c.\n", primeira_letra_do_nome);
	printf("\nValor da variavel \"ultimos_2_digitos_ru\" apos a atribuicao por referencia: %d.\n", ultimos_2_digitos_ru);
	printf("\nValor da variavel \"ultimos_4_digitos_ru\" apos a atribuicao por referencia: %.2f.\n", ultimos_4_digitos_ru);

	system("pause");
	return 0;
}



/*
Exerc�cio 1:
Escreva um algoritmo em linguagem C com as seguintes instru��es:
1. Declare tr�s vari�veis (inteiro, real e char);
2. Declare tr�s ponteiros;
3. Associe as vari�veis aos ponteiros;
4. Modifique os valores de cada vari�vel indiretamente usando os ponteiros
associados. Para armazenar os valores nas vari�veis, armazene na vari�vel
char a primeira letra do seu nome, na vari�vel inteira os dois �ltimos d�gitos
do seu RU e na vari�vel real os 4 �ltimos d�gitos do seu RU, sendo os 2
�ltimos os valores com virgula;
5. Imprima na tela os valores das vari�veis antes e ap�s a modifica��o.

*/