// Documenta��o
// p�gina 13

// A fun��o abaixo recebe um n�mero n >= 1 e um vetor v
// e devolve o valor de um elemento m�ximo de v[0..n-1].

#include <stdio.h>

int mostrarMax (int n, int v[])
{
	int i, x = v[0];
	for (i = 1; i < n; i++)
		if (x < v[i]) x = v[i];
	return x;
}

int main()
{
	int v[5] = {0, 5, 0, 1, 3};
	int n = 5, x = 0;
	x = mostrarMax(n,v);
	printf ("%d", x);
	return 0;
}
