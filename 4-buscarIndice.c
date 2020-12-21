// Documentação

// A função abaixo recebe um número n >= 1, um vetor v e um número x que seja elemento de v
// e devolve a posição de x em v[0..n-1].

#include <stdio.h>

int buscarIndice (int n, int v[], int x)
{
	int i = 0;
	while (v[i] != x && i < n) i++;
	return i;
}

int main()
{
	int v[5] = {0, 5, 0, 1, 3};
	int n = 5, x = 1;
	int i = buscarIndice(n, v, x);
	printf ("%d", i);
	return 0;
}
