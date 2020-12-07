// Bom leiaute - Remove zeros
// página 5

// A função recebe o inteiro n >= 1 e um vetor v.
// Retorna o número n de elementos do vetor após a remoção dos zeros.

#include <stdio.h>

int removerZero (int n, int v[])
{
	int i, j;
	i = 0;
	while (i < n)
	{
		if (v[i] != 0)
			i++;
		else
		{
			for (j = i + 1; j < n; j++)
				v[j - 1] = v[j];
			n--;
		}
	}
	return n;
}

int main()
{
	int v[5] = {0, 5, 0, 1, 3};
	int n = 5, i;
	n = removerZero (n, v);
	for (i = 0; i < n; i++)
		printf ("%d\t", v[i]);
	printf ("\n%d", n);
	return 0;
}
