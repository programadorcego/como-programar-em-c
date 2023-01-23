#include <stdio.h>

int main()
{
	int contador = 1; /* inicialização */
	
	while (contador <= 10) /* condição de repetição */
	{
		printf("%d \n", contador);
		++contador; /* incremento */
	}
	
	return 0;
}