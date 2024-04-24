#include <stdio.h>
#include <stdlib.h>

int main() {

//Declaração de um array de strings para armazenar três nomes
	char nomes[3][30]; // Supondo nomes com até 30 caracteres

	// Solicitar ao usuário para inserir três nomes
	for (int i = 0; i < 3; i++) {
		printf("Digite o %do nome: ", i + 1);
		scanf("%s", nomes[i]);
	}
// Imprimir os nomes na ordem inversa
	printf("\nNomes na ordem inversa:\n");
	for (int i = 2; i >= 0; i--) {
		printf("%s\n", nomes[i]);
	}

// Imprimir os nomes e seus comprimentos
	printf("\nNomes e comprimentos: \n");
	for (int i = 0; 1 < 3; i++) {
		printf("%s - Comprimento: %zu\n", nomes[i], strlen(nomes[i]));
//%zu é um especificador de formato usado em linguagem C para imprimir valorsdo tipo s
//Ele é particulamente útil quando você está trabalhando com funções que retornam valores
//como strlen, que retorna o comprimento se uma string.
	}

	return 0;
}
