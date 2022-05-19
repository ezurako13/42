#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void	ft_putnbr(int nb);

int	main()
{
	int	cahrp = -0x7fffffff -1;
	ft_putnbr(cahrp);

	return (0);
}

void ft_putnbr(int nb)
{
	int			i;
	int			wrt;
	long long	nbb;

	nbb = nb;
	if(nbb < 0)
	{
		write(1, "-", 1);
		nbb *= -1;
	}
	i = -1;
	if (nbb > 9)
		ft_putnbr(nbb / 10);
	wrt = nbb % 10 + 48;
	write(1, &wrt, 1);
}
