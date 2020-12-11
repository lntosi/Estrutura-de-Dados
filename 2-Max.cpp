// Documenta��o
// p�gina 13

// A fun��o abaixo recebe um n�mero n >= 1 e um vetor v
// e devolve o valor de um elemento m�ximo de v[0..n-1].

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
