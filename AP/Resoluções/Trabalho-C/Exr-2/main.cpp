#include <stdlib.h>
#include <stdio.h>


void flush()

int main() {

	int ru, valor, *p_ru, *p_valor;
	 
	p_ru = &ru;
	p_valor = &valor;

	printf("Digite seu RU: ");
	scanf("%d", p_ru);


	return 0; 
}

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