#include <stdlib.h>
#include <stdio.h>

// Declaração da Struct Aluno com os campos Nome e RU
struct aluno {
	char nome[50];
	int ru;
};
typedef struct aluno Aluno; // definição do tipo "Aluno" para facilitar a chamada

//prototipagem
void flush();
Aluno criar_aluno(char *nome, int ru);

int main() {

	//Declaração das variáveis que conterão a entrada do usuário
	char nome[50];
	int ru;

	printf_s("Digite o nome do aluno a ser inserido: ");
	// Atribuição da entrada do usuário para a variável nome em formato de "string"
	fgets(nome, sizeof(nome), stdin);

	// soliciação ao usuário do RU e atribuição do mesmo para a variável responsável
	printf_s("\nDigite o RU do aluno a ser inserido: "); 
	scanf_s("%d", &(ru));
	flush();

	// nova variável aluno retornada pela função de construção de alunos
	Aluno aluno = criar_aluno(nome, ru);

	// impressão na tela dos membros do registro aluno
	printf_s("\n\n Nome: %s \n RU: %d\n\n", aluno.nome, aluno.ru);
	system("pause");
	return 0;
}

//função responsável pela criação de novos alunos
Aluno criar_aluno(char *nome, int ru) {
	Aluno aluno;
	int i;
	for (i = 0; i < 50; i++)
	{
		aluno.nome[i] = nome[i];
	}

	aluno.ru = ru;
	return aluno;
}

// método para a limpeza de buffer
void flush() {
	char c;
	while ((c = getchar()) != '\n' && c != EOF) {}
}

/*
	Exercicio 3 - Faça um algoritmo em linguagem C com as seguintes funcionalidades:
 Receba um registro, com dois campos, como dados de entrada.
 O primeiro campo é um vetor que vai armazenar o nome do aluno.
 O segundo campo é uma variável do tipo inteiro que vai armazenar o RU do
aluno.
 Imprime na tela os dados armazenados na estrutura.
//Um ponteiro de Aluno declararia-se assim: Aluno *aluno = (Aluno *)malloc(sizeof(Aluno)); 
//Mas o enunciado não cita ponteiros
	*/