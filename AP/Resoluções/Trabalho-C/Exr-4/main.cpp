#include <stdio.h>
#include <stdlib.h>

// Declara��o da Struct Aluno com os campos Nome e RU
struct aluno {
	char nome[50];
	int ru;
};
typedef struct aluno Aluno; // defini��o do tipo "Aluno" para facilitar a chamada

//prototipagem
void flush();
int main() {

	//Declara��o da vari�vel ponteiro pra Aluno
	Aluno *aluno = (Aluno *)malloc(sizeof(Aluno));

	printf_s("Digite o nome do aluno a ser inserido: ");
	// Atribui��o da entrada do usu�rio para o membro nome de aluno em formato de "string"
	fgets(aluno->nome, sizeof(aluno->nome), stdin);

	// solicia��o ao usu�rio do RU e atribui��o do mesmo para o membro ru de aluno
	printf_s("\nDigite o RU do aluno a ser inserido: ");
	scanf_s("%d", &(aluno->ru));
	flush();

	// impress�o na tela dos membros do registro aluno usando ponteiros
	printf_s("\n\n Nome: %s \n RU: %d\n\n", aluno->nome, aluno->ru);
	system("pause");
	return 0;
}

// m�todo para a limpeza de buffer do teclado
void flush() {
	char c;
	while ((c = getchar()) != '\n' && c != EOF) {}
}

/*

Exerc�cio 4:
Replique o exerc�cio 3. Por�m, agora, declare um ponteiro para a estrutura de dados
heterog�nea. No momento da leitura dos dados e da impress�o na tela, use o ponteiro
para buscar o conte�do dos campos. Imprima na tela tamb�m o seu RU na tela

*/