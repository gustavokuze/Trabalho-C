#include <stdio.h>
#include <stdlib.h>

// Declaração da Struct Aluno com os campos Nome e RU
struct aluno {
	char nome[50];
	int ru;
};
typedef struct aluno Aluno; // definição do tipo "Aluno" para facilitar a chamada

//prototipagem
void flush();
int main() {

	//Declaração da variável ponteiro pra Aluno
	Aluno *aluno = (Aluno *)malloc(sizeof(Aluno));

	printf_s("Digite o nome do aluno a ser inserido: ");
	// Atribuição da entrada do usuário para o membro nome de aluno em formato de "string"
	fgets(aluno->nome, sizeof(aluno->nome), stdin);

	// soliciação ao usuário do RU e atribuição do mesmo para o membro ru de aluno
	printf_s("\nDigite o RU do aluno a ser inserido: ");
	scanf_s("%d", &(aluno->ru));
	flush();

	// impressão na tela dos membros do registro aluno usando ponteiros
	printf_s("\n\n Nome: %s \n RU: %d\n\n", aluno->nome, aluno->ru);
	system("pause");
	return 0;
}

// método para a limpeza de buffer do teclado
void flush() {
	char c;
	while ((c = getchar()) != '\n' && c != EOF) {}
}

/*

Exercício 4:
Replique o exercício 3. Porém, agora, declare um ponteiro para a estrutura de dados
heterogênea. No momento da leitura dos dados e da impressão na tela, use o ponteiro
para buscar o conteúdo dos campos. Imprima na tela também o seu RU na tela

*/