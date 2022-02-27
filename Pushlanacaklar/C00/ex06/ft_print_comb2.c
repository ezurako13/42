/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agokturk <agokturk@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 10:27:25 by agokturk          #+#    #+#             */
/*   Updated: 2022/02/27 10:27:25 by agokturk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	yazdir(int sayi, int n);

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
	write(1, " ", 1);
}
