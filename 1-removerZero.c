// Bom leiaute - Remove zeros
// página 5

// A função recebe o inteiro n >= 1 e um vetor v.
// Retorna o número n de elementos do vetor após a remoção dos zeros.

#include <stdio.h>

int removeZero (int v[], int n)
{
	int i, j;
	i = 0;
	while(i < n)
	{
		if(v[i] != 0)
		{
			i++;
		}
		else
		{
			for(j = i + 1; j < n; j++)
			{
				v[j - 1] = v[j];
			}
			n--;
		}
	}
	return n;
}

int main()
{
	int n = 5;
	int v[5] = {3, 0, 8, 0, 9};
	int i;
	n = removeZero(v, n);
	printf("O vetor possui %d elementos.\n", n);
	for (i = 0; i < n; i++)
		printf("%d\t", v[i]);
	return 0;
}
