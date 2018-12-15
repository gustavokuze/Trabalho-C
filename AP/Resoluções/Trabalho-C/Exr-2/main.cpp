#include <stdlib.h>
#include <stdio.h>


// prototipagem
void flush();

int main() {

	/* Declara��o das vari�veis e dos ponteiros */
	int ru, valor, *p_ru, *p_valor;

	/* atribui��o do endere�o de mem�ria das vari�veis aos respectivos ponteiros*/
	p_ru = &ru;
	p_valor = &valor;

	/* requisi��o ao usu�rio pelo RU */
	printf("Digite seu RU: ");

	/* atribui��o do valor digitado � vari�vel atrav�s do ponteiro
		NOTA: o Visual Studio n�o permite a utiliza��o da fun��o
		scanf, ent�o utilizei o scanf_s que tem o funcionamento equivalente */
	scanf_s("%d", p_ru);

	/* limpeza do buffer */
	flush();

	/* abaixo � feito exatamente o mesmo processo, mas dessa vez para o valor ao inv�s do RU */
	printf("\nDigite o valor para comparar ao RU: ");
	scanf_s("%d", p_valor);
	flush();


	/* compara��o do valor com o RU atrav�s dos ponteiros utilizando operador tern�rio */

	(*p_ru > *p_valor) ?
		printf("\nO seu RU e maior que o valor digitado: RU -> %d | Valor -> %d \n", *p_ru, *p_valor) :
		printf("\nO valor digitado e maior que o seu RU: RU -> %d | Valor -> %d \n", *p_ru, *p_valor);

	system("pause");

	return 0;
}

// m�todo respons�vel pela limpeza do buffer do teclado
void flush() {
	char c;
	while ((c = getchar()) != '\n' && c != EOF) {}
}

/*
	Exercicio 2 - Escreva um algoritmo em LINGUAGEM C que armazene na mem�ria o seu RU e o
valor 1234567, ambos digitados pelo usu�rio na tela.
Em seguida, imprima na tela ambos RU usando ponteiros. O algoritmo tamb�m vai
ter que comparar os dois RU usando ponteiros e imprimir na tela qual � o maior.

	*/