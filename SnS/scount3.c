#include <stdio.h>
#include <stdlib.h>

int		main(void)
{
	int n, x;
	int *a;

	scanf("%d", &n);
	
	a = (int *)malloc(sizeof(int) * n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}

	scanf("%d", &x);

	for (int i = 0; i < n; i++)
	{
		if (a[i] == x)
			printf("%d ", (i + 1));
	}
	return (0);
}
