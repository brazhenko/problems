#include <stdio.h>

int		ways(int n)
{
	int a, b, c, d;
	a = 1;
	b = 2;
	c = 4;
	d = 7;

	for (int i = 1; i < n; i++)
	{
		a = b;
		b = c;
		c = d;
		d = a + b + c;		
	}
	return (a);
}

int		main(void)
{
	int l;
	scanf("%d", &l);
	printf("%d", ways(l));
		
	return (0);		
}
