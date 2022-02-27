/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agokturk <agokturk@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 15:19:54 by agokturk          #+#    #+#             */
/*   Updated: 2022/02/27 15:19:54 by agokturk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	sayi;

	sayi = 1;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	while (nb != 0)
	{
		sayi *= nb;
		nb--;
	}
	return (sayi);
}
