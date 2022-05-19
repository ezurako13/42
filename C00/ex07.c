#include <unistd.h>
#include <limits.h>

void	yazdir(long long girilen, int basamak_sayisi);
void	ft_putnbr(int nb);

int	main(void)
{
	int	girilen_sayi;

	girilen_sayi = -2147483648; //(-1) * INT_MAX - 1;
	ft_putnbr(girilen_sayi);
	return (0);
}

void	yazdir(long long girilen, int basamak_sayisi)
{
	int	i;
	int	bolen;
	int	yazdigim_basamak;

	if (girilen < 0)
	{
		girilen *= (-1);
		write(1, "-", 1);
	}
	if (basamak_sayisi == 0)
		write(1, "0", 1);
	while (basamak_sayisi)
	{
		bolen = 1;
		i = basamak_sayisi - 1;
		while (i)
		{
			bolen *= 10;
			i--;
		}
		yazdigim_basamak = (girilen / bolen) % 10 + 48;
		write(1, &yazdigim_basamak, 1);
		basamak_sayisi--;
	}
}

void	ft_putnbr(int nb)
{
	int	basamak_sayisi;
	long long	kontrol;
	long long	sayi;

	sayi = nb;
	kontrol = nb;
	if (kontrol < 0)
		kontrol *= (-1);
	basamak_sayisi = 0;
	while (kontrol)
	{
		if (kontrol != 0)
			basamak_sayisi++;
		kontrol = kontrol / 10;
	}
	yazdir(sayi, basamak_sayisi);
}
