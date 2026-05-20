#include <stdio.h>
#include <stdlib.h>
#include "function_fatorial.c"

int main(int argc, const char *argv[]) {
	if (argc != 2)
	{
	printf("digite o numero que deseja fatorar: ");
	}

	else {
	int input = atoi(argv[1]);
	printf("%d\n", fatorial(input));
	}
	return 0;

}