/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agokturk <agokturk@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 14:33:21 by agokturk          #+#    #+#             */
/*   Updated: 2022/02/27 14:33:21 by agokturk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	hex(char nnprntbl, char *sonuc);

void	ft_putstr_non_printable(char *str)
{
	int		i;
	char	ff[2];

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] > 126)
		{
			write(1, "\\", 1);
			hex(str[i], ff);
			write(1, ff, 2);
			i++;
		}
		else
		{
			write(1, str + i, 1);
			i++;
		}
	}
}

void	hex(char nnprntbl, char *sonuc)
{
	sonuc[0] = 0;
	while (nnprntbl / 16 != 0)
	{
		nnprntbl /= 16;
		sonuc[0]++;
	}
	sonuc[1] = "0123456789abcdef"[nnprntbl % 16];
	sonuc[0] = "0123456789abcdef"[sonuc[0] % 16];
}
