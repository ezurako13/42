/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agokturk <agokturk@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 15:19:48 by agokturk          #+#    #+#             */
/*   Updated: 2022/02/27 15:19:48 by agokturk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	kontrol;

	if (nb < 2)
		return (0);
	kontrol = nb - 1;
	while (kontrol <= nb && kontrol > 1)
	{
		if (nb % kontrol == 0)
			return (0);
		kontrol--;
	}
	return (1);
}
