/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agokturk <agokturk@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 10:27:29 by agokturk          #+#    #+#             */
/*   Updated: 2022/02/27 10:27:29 by agokturk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	yazdir(int sayi, int n);
int		combination(int n);
int		sonraki_sayi(int sayi, int n, int artis);

void	ft_print_comb(void)
{
	int	sayi;
	int	i;
	int	donmesayisi;

	donmesayisi = combination(3);
	sayi = 0;
	i = 0;
	while (i < donmesayisi)
	{
		sayi = sonraki_sayi(sayi, 3, 1);
		yazdir(sayi, 3);
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
	return (0);
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
