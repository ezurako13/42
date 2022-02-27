/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agokturk <agokturk@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 15:11:15 by agokturk          #+#    #+#             */
/*   Updated: 2022/02/27 15:11:15 by agokturk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	int			wrt;
	long long	nbb;

	nbb = nb;
	if (nbb < 0)
	{
		write(1, "-", 1);
		nbb *= -1;
	}
	if (nbb > 9)
		ft_putnbr(nbb / 10);
	wrt = nbb % 10 + 48;
	write(1, &wrt, 1);
}
