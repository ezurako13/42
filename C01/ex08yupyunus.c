#include <stdio.h>
#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size);

int	main(void)
{
	int	array[] = {1, 3, 7, 11, 225, 6, 12556, 2, 92, 10};
	int	i;

	i = *((&array) + 1) - &array[0];
	ft_sort_int_tab(&array[0], i);
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	b;
	int	a;
	int	temp;

	a = 0;
	while (a <= size)
	{
		b = 0;
		while (b < size)
		{
			if (*(tab + b) > *(tab + b + 1))
			{
				temp = *(tab + b + 1);
				*(tab + b + 1) = *(tab + b);
				*(tab + b) = temp;
			}
			b++;
		}
		a++;
	}
	a = 0;
	for (a = 0; a < size; a++)
	{
		printf("%d\n", *(tab + a));
	}
}
