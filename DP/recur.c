#include <stdio.h>

int		main(void)
{
	int a[1000];
	a[0] = 1;
	a[1] = 1;

	int n;
	scanf("%d", &n);
	
	for (int i = 2; i <= n; i++)
	{
		if (i & 1)
			a[i] = a[i / 2] - a[i / 2 - 1];
		else
			a[i] = a[i / 2] + a[i / 2 - 1];
	}

	printf("%d", a[n]);

	return (0);		
}

