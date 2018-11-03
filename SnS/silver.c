/*NOT READY*/

#include <stdio.h>

int		main(void)
{
	int best = 0;
	int best2 = 0;

	int current = 0;
	int num = 0;

	scanf("%d", &num);

	for (int i = 0; i < num; i++)
	{
		scanf("%d", &current);
		if (current > best)
			best = current;
		if (best2 < current && current < best)
			best2 = current;
	}
	
	printf("%d", best2);

	return (0);
}
