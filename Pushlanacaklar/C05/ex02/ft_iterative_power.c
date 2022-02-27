/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agokturk <agokturk@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 15:19:57 by agokturk          #+#    #+#             */
/*   Updated: 2022/02/27 15:19:57 by agokturk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	sayi;

	sayi = 1;
	if (power <= 0)
		return (1);
	power++;
	while (--power)
		sayi *= nb;
	return (sayi);
}
