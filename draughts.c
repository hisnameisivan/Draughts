#include <stdio.h>

int		func(int x, int y, int *sit)
{
	if (x >= 0 && x <= 4 && y >= 0 && y <= 4)
	{
		(*sit)++;
		return (1);
	}
	return (0);
	// {
	// 	func(x + 1, y, sit);
	// 	func(x - 1, y, sit);
	// }
	// (*sit)++;
}

int		main(void)
{
	int		x;
	int		y;
	// int		x_2;
	// int		y_2;
	int		i;
	int		situation;

	x = 2;
	y = 0;
	// x_2 = 3;
	// y_2 = 0;
	situation = 0;
	i = 1;
	//while (i < 5)
	//{
		 while (func(x, y, &situation) == 1)
		{
			func(++x, ++y, &situation);
			func(--x, ++y, &situation);
		}
	//	i++;
//	}

	// while (i < 8)
	// {
	// 	if (x_1 >= 0 && x_1 <= 7)
	// 	{
	// 		x_1++;
	// 		//y_1++;
	// 		situation++;
	// 	}
	// 	if (x_2 >= 0 && x_2 <= 7)
	// 	{
	// 		x_2--;
	// 		//y_1++;
	// 		situation++;
	// 	}
	// 	if (y_1 >= 0 && y_1 <= 7)
	// 		y_1++;
	// 	i++;
	// }
	// printf("x_1 = %d, y_1 = %d, x_2 = %d, situation = %d\n", x_1, y_1, x_2, situation);
	printf("situation = %d\n", situation);
	return (0);
}
