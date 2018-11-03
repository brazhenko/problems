#include <stdio.h>

int fib(n)
{
	int a, b, c;
	a = 1;
	b = 1;
	c = 2;

	for (int i = 0; i < n; i++)
	{
		a = b;
		b = c;
		c = a + b;
	}
	return (a);
}

int		main(void)
{
	int n = 0;

	scanf("%d", &n);
	printf("%d", fib(n  + 1));
	return (0);
}
