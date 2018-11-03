#include <stdio.h>
#include <stdlib.h>

int		main(void)
{
	int k, n;
	scanf("%d %d", &k, &n);
	n++;

	int *mn  = (int *)malloc(sizeof(int) * n);

	mn[0] = 1;

	for (int i = 0; i < n; i++)
	{
		int j = i - 1;
		int sum = 0;
		while (j >= 0 && j >= i - k)
		{
			sum += mn[j];
			j--;
		}
		j = 0;
		if (sum != 0)
			mn[i] = sum;
	}

	printf("%d\n", mn[n - 1]);
	return (0);
}
