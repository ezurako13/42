/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agokturk <agokturk@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 10:27:03 by agokturk          #+#    #+#             */
/*   Updated: 2022/02/27 10:27:03 by agokturk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

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
	int			basamak_sayisi;
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
