// Documentação

// A função abaixo recebe um número n >= 1 e um vetor v
// e devolve a soma dos elementos de v[0..n-1].

#include <stdio.h>

int somarElementos (int v[], int n)
{
	int i, x = 0;
	for (i = 0; i < n; i++) x += v[i];
	return x;
}

int main()
{
	int v[5] = {0, 5, 0, 1, 3};
	int n = 5, x = 0;
	x = somarElementos(v, n);
	printf ("%d", x);
	return 0;
}
