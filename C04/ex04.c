#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int		baseincele(char *base);
void	ft_putnbr_base(int nbr, char *base);

int	main()
{
	int	cahrp = 255;
	ft_putnbr_base(cahrp, "0123456789abcdef");

	return (0);
}

int	baseincele(char *base)
{
	int		taban;
	char	harfs[128];

	taban = -1;
	while (++taban < 128)
		harfs[taban] = 0;
	taban = 0;
	while (base[taban] != '\0')
	{
		if (base[taban] == '-' || base[taban] == '+' || harfs[base[taban]] > 0)
			return (0);
		harfs[base[taban]]++;
		taban++;
	}
	return (taban);
}

void	ft_putnbr_base(int nbr, char *base)
{
	long long	nbb;
	int			taban;

	taban = baseincele(base);
	if (taban < 2 || base[0] == '\0')
		return ;
	nbb = nbr;
	if (nbb < 0)
	{
		write(1, "-", 1);
		nbb *= -1;
	}
	if (nbb > taban - 1)
		ft_putnbr_base(nbb / taban, base);
	write(1, &base[nbb % taban], 1);
}
