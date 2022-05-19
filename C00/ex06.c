#include <unistd.h>

void	ft_print_comb2(void);
void	yazdir(int a, int b);

int	main(void)
{
	ft_print_comb2();
	return (0);
}

void	ft_print_comb2(void)
{
	int	i;
	int	o;

	i = 0;
	o = 1;
	while (i <= 99)
	{
		o = 1;
		while (o <= (99 - i))
		{
			yazdir(i, (o + i));
			o++;
		}
		i++;
	}
	write(1, "\n", 1);
}

void	yazdir(int a, int b)
{
	char	output[4];

	output[0] = (char)(a / 10) + 48;
	output[1] = (char)(a % 10) + 48;
	output[2] = (char)(b / 10) + 48;
	output[3] = (char)(b % 10) + 48;
	write(1, &output[0], 1);
	write(1, &output[1], 1);
	write(1, " ", 1);
	write(1, &output[2], 1);
	write(1, &output[3], 1);
	if (a != 98 || b != 99)
		write(1, ",", 1);
	if (!(a == 98 && b == 99))
		write(1, " ", 1);
}
