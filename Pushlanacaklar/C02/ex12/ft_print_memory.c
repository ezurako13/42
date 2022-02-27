/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agokturk <agokturk@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 14:35:24 by agokturk          #+#    #+#             */
/*   Updated: 2022/02/27 14:35:24 by agokturk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	prnthex(long long sayi, char *heksalsayi, int i);
void	prntstring(char *str, int size);

void	*ft_print_memory(void *addr, unsigned int size)
{
	char	heksalsayi[16];
	int		i;
	int		o;

	o = 0;
	while (((char *)addr)[o] != '\0')
	{
		prnthex((long long)(addr + o), heksalsayi, 16 - 1);
		write(1, ": ", 2);
		i = 0;
		while (((char *)(addr + o))[i] != '\0' && (unsigned int)i < size)
		{
			prnthex(((char *)(addr + o))[i], heksalsayi, 2 - 1);
			write(1, heksalsayi, 2);
			i++;
			if (i % 2 == 0)
				write(1, " ", 1);
		}
		prntstring(((char *)(addr + o)), size);
		write(1, "\n", 1);
		o += i;
	}
	return (0);
}

void	prnthex(long long sayi, char *heksalsayi, int i)
{
	if (i > 0)
	{
		prnthex(sayi / 16, heksalsayi, i - 1);
	}
	heksalsayi[i] = "0123456789abcdef"[sayi % 16];
	if (i == 15)
		write(1, heksalsayi, i + 1);
}

void	prntstring(char *str, int size)
{
	int	i;

	i = 0;
	while (str[i] != '\0' && i < size)
	{
		if (str[i] < 32 || str[i] > 126)
			write(1, ".", 1);
		else
			write(1, str + i, 1);
		i++;
	}
}
