#include <stdio.h>
#include <stdlib.h>

/*
** Программа для подсчета способов пройти шашке в дамки из положения (x, y),
** на доске размерностью dim. Нумерация ячеек по горизонтали и вертикали
** начинается с '0', размерность с '1'. Программа, запущенная без аргументов,
** вычисляет количество способов для поля 8x8, где шашка находится на первой,
** строке, четвертом столбце. Аналогично запуску
** ./a.out 3 0 8
*/

unsigned long long	func(int x, int y, int dim)
{
	if (x < 0 || x > dim)
		return (0);
	if (y == dim)
		return (1);
	return (func(x + 1, y + 1, dim) + func(x - 1, y + 1, dim));
}

int					main(int argc, char **argv)
{
	int					x;
	int					y;
	int					dim;
	unsigned long long	result;

	if (argc == 1)
	{
		x = 3;
		y = 0;
		dim = 7;
	}
	else
	{
		x = atoi(argv[1]);
		y = atoi(argv[2]);
		dim = atoi(argv[3]) - 1;
	}
	result = 0;
	result = func(x, y, dim);
	printf("%llu\n", result);
	return (0);
}
