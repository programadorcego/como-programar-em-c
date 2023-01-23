#include <stdio.h>

int main()
{
	int fatorial = 1, contador = 0, numero;
	
	printf("Informe um número inteiro.\n");
	scanf("%d", &numero);
	
	while(++contador <= numero) fatorial *= contador;
	
	printf("O valor do fatorial e %d.", fatorial);
	
	return 0;
}