//Bom leiaute - Remove zeros
//página 5

#include<stdio.h>

int removerZero (int n, int v[])
{
	int i, j;
	i = 0;
	while (i < n)
	{
		if (v[i] != 0)
			i = i + 1;
		else
		{
			j = i + 1;
			while(j < n)
			{
				v[j - 1] = v[j];
				j++;
			}
			n = n - 1;
		}
	}
	return n;
}

int main()
{
	int v[5] = {0, 2, 0, 3, 4};
	int n = 5;
	int i = 0;
	n = removerZero (n, v);
	while(i < n)
	{
		printf ("%d\t", v[i]);
		i++;
	}
	printf ("\n%d", n);
	return 0;
}
