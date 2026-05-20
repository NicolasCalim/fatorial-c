#include "function_fatorial.c"
#include <stdio.h>
#include <assert.h>

void main()
{
	assert(fatorial(0) == 1 && fatorial(1) == 1 && fatorial(6) == 720);
	printf("Teste realizado com sucesso");
}
