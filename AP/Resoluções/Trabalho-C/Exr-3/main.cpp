#include <stdlib.h>
#include <stdio.h>

void flush();

struct aluno {
	char nome[50];
	int ru;
};
typedef struct aluno Aluno; 


int main() {

	Aluno aluno = (aluno *)malloc(sizeof()); 
	


	return 0;
}

void flush() {
	char c;
	while ((c = getchar()) != '\n' && c != EOF) {}
}

/*
	Exercicio 3 - Faça um algoritmo em linguagem C com as seguintes funcionalidades:
 Receba um registro, com dois campos, como dados de entrada.
 O primeiro campo é um vetor que vai armazenar o nome do aluno.
 O segundo campo é uma variável do tipo inteiro que vai armazenar o RU do
aluno.
 Imprime na tela os dados armazenados na estrutura.

	*/