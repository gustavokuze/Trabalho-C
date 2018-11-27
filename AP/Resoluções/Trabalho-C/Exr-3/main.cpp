#include <stdlib.h>
#include <stdio.h>

void flush();

struct aluno {
	char nome[50];
	int ru;
};
typedef struct aluno Aluno; 


int main() {

	Aluno *aluno = (Aluno *)malloc(sizeof(Aluno)); 
	printf_s("Digite o nome do aluno a ser inserido: ");
	
	fgets(aluno->nome, sizeof(aluno->nome), stdin);


	printf_s("\nDigite o RU do aluno a ser inserido: "); 
	scanf_s("%d", &(aluno->ru));
	flush();

	printf_s("\n\n Nome: %s \n RU: %d\n\n", aluno->nome, aluno->ru);
	system("pause");
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