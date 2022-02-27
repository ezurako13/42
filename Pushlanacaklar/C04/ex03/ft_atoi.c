/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agokturk <agokturk@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 15:11:08 by agokturk          #+#    #+#             */
/*   Updated: 2022/02/27 15:11:08 by agokturk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	sayi;
	int	negatif;

	negatif = 0;
	sayi = 0;
	i = -1;
	while (str[++i] == ' ' || str[i] == '\t' || str[i] == '\v')
		;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
		negatif++;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		sayi = sayi * 10 - (int)(str[i] - '0');
		i++;
	}
	if (negatif % 2 == 1)
		return (sayi);
	return (sayi * (-1));
}
