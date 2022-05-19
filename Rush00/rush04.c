void	ft_putchar(char yaz);

void	rush(int x, int y)
{
	int	i;
	int	o;

	i = 0;
	while (i < y)
	{
		o = 0;
		while (o < x)
		{
			if ((i == 0 && (o == 0)) || (i == (y - 1) && (o == (x - 1))))
				ft_putchar('A');
			if (((i == 0 && (o == (x - 1))) || (i == (y - 1) && (o == 0))))
				ft_putchar('C');
			if (((i == 0 || i == (y - 1)) && (o != 0 && o != (x - 1))))
				ft_putchar('B');
			if (((i != 0 && i != (y - 1)) && (o == 0 || o == (x - 1))))
				ft_putchar('B');
			if ((i != 0 && i != (y - 1)) && (o != 0 && o != (x - 1)))
				ft_putchar(' ');
			if ((o == (x - 1)))
				ft_putchar('\n');
			o++;
		}
		i++;
	}
}
