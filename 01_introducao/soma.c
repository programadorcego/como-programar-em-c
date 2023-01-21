#include <stdio.h>

int main()
{
	int inteiro1, inteiro2, soma; /* Declaração */
	
	printf("Entre com o primeiro inteiro\n"); /* prompt */
	scanf("%d", &inteiro1); /* Lê um inteiro */
	
	printf("Entre com o segundo inteiro\n");
	scanf("%d", &inteiro2);
	
	soma = inteiro1 + inteiro2; /* atribui soma */
	
	printf("A soma é %d\n", soma); /* imprime soma */
	return 0; /* indica que o programa foi bem sucedido */
}