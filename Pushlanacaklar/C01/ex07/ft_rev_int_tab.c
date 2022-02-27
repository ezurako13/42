/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agokturk <agokturk@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 10:33:57 by agokturk          #+#    #+#             */
/*   Updated: 2022/02/27 10:33:57 by agokturk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	reg;

	i = 0;
	while (i < size / 2)
	{
		reg = tab[i];
		tab[i] = tab[size - i - 1];
		tab[size - i - 1] = reg;
		i++;
	}
}
