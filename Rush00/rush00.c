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
			if ((o == 0 || o == (x - 1)) && (i == 0 || i == (y - 1)))
				ft_putchar('o');
			else if ((o == (x - 1)) && (i == 0 || i == (y - 1)))
				ft_putchar('\n');
			else if (i == 0 || i == (y - 1))
				ft_putchar('-');
			if ((o == 0 || o == (x - 1)) && (i != 0 && i != (y - 1)))
				ft_putchar('|');
			else if (i != 0 && i != (y - 1))
				ft_putchar(' ');
			if ((o == (x - 1)))
				ft_putchar('\n');
			o++;
		}
		i++;
	}
}
