#include <stdio.h>

unsigned long long	func(int x, int y)
{
	if (x < 0 || x > 7)
		return (0);
	if (y == 7)
		return (1);
	return (func(x + 1, y + 1) + func(x - 1, y + 1));
}

int					main(void)
{
	int					x;
	int					y;
	unsigned long long	result;

	x = 3;
	y = 0;
	result = 0;
	result = func(x, y);
	printf("%llu\n", result);
	return (0);
}
