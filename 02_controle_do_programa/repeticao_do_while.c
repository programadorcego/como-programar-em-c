#include <stdio.h>

int main()
{
	int contador = 1;
	
	do
	{
		printf("%d\n", contador);
	} while (++contador <= 10);
	
	return 0;
}