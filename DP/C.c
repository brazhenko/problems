#include <stdlib.h>

int		C(int n, int k)
{
	int **table;
	
	table =(int **)malloc(sizeof(int **) * (n + 1));
	for (int i = 0; i <= n; i++)
	{
		table[i] = (int *)malloc(sizeof(int) * (n + 1));
	}
	for (int i = 0; i <= n; i++)
	{
		table[i][0] = 1;
		table[i][i] = 1;
		for (int j = 1; j < i; j++)
		{
			table[i][j] = table[i - 1][j] + table[i - 1][j - 1];
		}
	}
	return (table[n][k]);
}
