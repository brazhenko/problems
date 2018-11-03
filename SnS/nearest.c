#include <stdio.h>
#include <stdlib.h>

int		abs(int x)
{
	if (x > 0)
		return (x);
	else
		return (-x);
}

int		main(void)
{
	int n, x;
	int *a;
	int mindist = 10000;
	int nearest = 0;

	scanf("%d", &n);
	
	a = (int *)malloc(sizeof(int) * n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}

	scanf("%d", &x);

	for (int i = 0; i < n; i++)
	{
		if (abs(a[i] - x) < mindist)
		{
			mindist = abs(a[i] - x);
			nearest = a[i];
		}
	}
		printf("%d", nearest);
}
