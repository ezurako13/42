#include <unistd.h>

void	ft_print_combn(int n);
void	yazdir(int basamaklar[9], int n, int *ustsinir);
int		ustsinirbul(int n);
int		yasakbelirle(int basamaklar[9], int n);

int	main(void)
{
	int	n;

	n = 9;
	ft_print_combn(n);
	return (0);
}

void	ft_print_combn(int n)
{
	int	ustsinir;
	int	arttir;
	int	basamaklar[9];
	int	i;
	int	sayi;

	ustsinir = ustsinirbul(n);
	arttir = 0;
	while (arttir < ustsinir)
	{
		sayi = arttir;
		i = 0;
		while (i < n)
		{
			basamaklar[i] = sayi % 10 + 48;
			sayi /= 10;
			i++;
		}
		yazdir(basamaklar, n, &ustsinir);
		arttir++;
	}
}

void	yazdir(int basamaklar[9], int n, int *ustsinir)
{
	int	i;
	int	o;

	i = 0;
	o = 0;
	if (yasakbelirle(basamaklar, n) == 0)
	{
		i = n - 1;
		while (i >= 0)
		{
			write(1, &basamaklar[i], 1);
			i--;
		}
		write(1, ", ", 2);
	}
}

int	ustsinirbul(int n)
{
	int	ustsinir;

	ustsinir = 1;
	while (n > 0)
	{
		ustsinir *= 10;
		n--;
	}
	return (ustsinir);
}

int	yasakbelirle(int basamaklar[9], int n)
{
	int	i;
	int	o;
	int	yazdirma;

	yazdirma = 0;
	o = 0;
	i = 0;
	while (i < n - 1)
	{
		o = i + 1;
		while (o < n)
		{
			if (basamaklar[i] == basamaklar[o])
				yazdirma = 1;
			o++;
		}
		if (basamaklar[i] <= basamaklar[i + 1])
			yazdirma = 1;
		i++;
	}
	return (yazdirma);
}
