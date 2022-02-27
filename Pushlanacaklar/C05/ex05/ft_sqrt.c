/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agokturk <agokturk@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 15:20:05 by agokturk          #+#    #+#             */
/*   Updated: 2022/02/27 15:20:05 by agokturk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	kontrol;
	int	kontrolkare;

	kontrol = 0;
	kontrolkare = kontrol * kontrol;
	while (kontrolkare <= nb && kontrol < 46341)
	{
		kontrol++;
		kontrolkare = kontrol * kontrol;
		if (kontrolkare == nb)
			return (kontrol);
	}
	return (0);
}
