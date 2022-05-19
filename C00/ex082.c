#include <unistd.h>

void	ft_print_combn(int n);
void	yazdir(int sayi, int n);
int		combination(int n);
int		sonraki_sayi(int sayi, int n, int artis);

int	main(void)
{
	int	n;

	n = 1;
	ft_print_combn(n);
	return (0);
}

void	ft_print_combn(int n)
{
	int	sayi;
	int	i;
	int	donmesayisi;

	if (n < 1 || n > 9)
		return ;
	donmesayisi = combination(n);
	sayi = 0;
	i = 0;
	while (i < donmesayisi)
	{
		sayi = sonraki_sayi(sayi, n, 1);
		yazdir(sayi, n);
		if (i < donmesayisi - 1)
			write(1, ", ", 2);
		sayi++;
		i++;
	}
}

void	yazdir(int sayi, int n)
{
	int	basamaklar[9];
	int	i;

	i = n - 1;
	while (i >= 0)
	{
		basamaklar[i] = 0;
		basamaklar[i] = sayi % 10;
		sayi /= 10;
		i--;
	}
	i = 0;
	while (i < n)
	{
		basamaklar[i] += 48;
		write(1, &basamaklar[i], 1);
		i++;
	}
}

int	combination(int n)
{
	if (n == 1)
		return (10);
	if (n == 2)
		return (45);
	if (n == 3)
		return (120);
	if (n == 4)
		return (210);
	if (n == 5)
		return (252);
	if (n == 6)
		return (210);
	if (n == 7)
		return (120);
	if (n == 8)
		return (45);
	if (n == 9)
		return (10);
}

int	sonraki_sayi(int sayi, int n, int artis)
{
	while (((sayi / (10 * artis)) % 10 >= (sayi / artis) % 10) && n > 1)
	{
		sayi = sonraki_sayi(sayi, n - 1, artis * 10);
		sayi += artis;
	}
	return (sayi);
}
