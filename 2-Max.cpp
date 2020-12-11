// Documentação
// página 13

// A função abaixo recebe um número n >= 1 e um vetor v
// e devolve o valor de um elemento máximo de v[0..n-1].

#include <stdio.h>

int Max (int v[], int n)
{
	int j, x = v[0];
	for (j = 1; j < n; j++)
		if (x < v[j]) x = v[j];
	return x;
}

int main()
{
	int v[5] = {0, 5, 0, 1, 3};
	int n = 5, x = 0;
	x = Max(v, n);
	printf ("%d", x);
	return 0;
}
