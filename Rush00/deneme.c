#include <unistd.h>
//////////////////////////////////////////////////////////////////////////////////////////////////////////

void	ft_putchar(char yaz)
{
	write(1, &yaz, 1);
	return;
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////

void	rush(int x, int y)
{
	while (y > 0)
	{
		if (i != 0)
		{
			ft_putchar('\n');
			ft_putchar('|');
		}
		o == 0;
		while (x > 0)
		{
			ft_putchar(o+48);
			ft_putchar('\n');
			if (x == 0 || i == (y - 1))
			{
				if (o == 0 || o == (x - 1))
					ft_putchar('o');
				else
					ft_putchar('-');
			}
			else
			{
				//ft_putchar(o+48);
				ft_putchar(' ');
			}
			x--;
		}
		if (i != y - 1)
			ft_putchar('|');
		y--;
	}
	
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <unistd.h>

int	main(void)
{
	rush(5, 5);
	return (0);
}
