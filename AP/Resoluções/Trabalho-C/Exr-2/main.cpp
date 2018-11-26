#include <stdlib.h>
#include <stdio.h>

void flush();

int main() {

	/*
		Declaração das variáveis e dos ponteiros
	*/
	int ru, valor, *p_ru, *p_valor;
	 
	// atribuição do endereço de memória das variáveis aos respectivos ponteiros
	p_ru = &ru;
	p_valor = &valor;

	//requisição ao usuário pelo RU
	printf("Digite seu RU: "); 
	//atribuição do valor digitado à variável através do ponteiro
	scanf_s("%d", p_ru);
	//limpeza do buffer
	flush();
	
	//abaixo é feito exatamente o mesmo processo, mas dessa vez para o valor ao invés do RU
	printf("\nDigite o valor para comparar ao RU: "); 
	scanf_s("%d", p_valor);
	flush();


	// comparação do valor com o RU através dos ponteiros
	if (*p_ru > *p_valor) {
		printf("\nO seu RU e maior que o valor digitado: RU -> %d | Valor -> %d \n", *p_ru, *p_valor);
	}
	else {
		printf("\nO valor digitado e maior que o seu RU: RU -> %d | Valor -> %d \n", *p_ru, *p_valor);
	}

	system("pause");

	return 0; 
}

void flush() {
	char c;
	while ((c = getchar()) != '\n' && c != EOF) {}
}

/*
	Exercicio 2 - Escreva um algoritmo em LINGUAGEM C que armazene na memória o seu RU e o
valor 1234567, ambos digitados pelo usuário na tela.
Em seguida, imprima na tela ambos RU usando ponteiros. O algoritmo também vai
ter que comparar os dois RU usando ponteiros e imprimir na tela qual é o maior.

	*/