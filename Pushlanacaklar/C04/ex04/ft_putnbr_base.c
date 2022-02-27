/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agokturk <agokturk@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 15:11:13 by agokturk          #+#    #+#             */
/*   Updated: 2022/02/27 15:11:13 by agokturk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr_base(int nbr, char *base)
{
	long long	nbb;
	int			taban;

	taban = -1;
	while (base[++taban] >= '0')
		;
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
