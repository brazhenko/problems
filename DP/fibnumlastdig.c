#include <stdio.h>

int		main(void)
{
	int n;
	int a, b, c;
	a = 1;
	b = 1;
	c = 2;
	
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		a = b % 10;		
		b = c;
		c = a + b;
	}
	printf("%d", (a));
	return (0);
}
