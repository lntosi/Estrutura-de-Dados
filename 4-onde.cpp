// Documentação

// A função abaixo recebe um número n >= 1, um vetor v e um número x que seja elemento de v
// e devolve a posição de x em v[0..n-1].

#include <stdio.h>

int onde(int x, int v[], int n)
{
	int j = 0;
	while (j < n && v[j] != x)
		j += 1;
	return j;
}

int main()
{
	int v[5] = {0, 5, 0, 1, 3};
	int n = 5, x = 3;
	int j = onde(x, v, n);
	printf ("%d", j);
	return 0;
}
