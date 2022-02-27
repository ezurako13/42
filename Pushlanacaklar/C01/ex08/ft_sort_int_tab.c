/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agokturk <agokturk@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 10:33:58 by agokturk          #+#    #+#             */
/*   Updated: 2022/02/27 10:33:58 by agokturk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	o;
	int	reg;
	int	bitt;

	bitt = 0;
	o = -1;
	while (++o < size - 1)
	{
		i = -1;
		bitt = 0;
		while (++i < size - 1 - o)
		{
			if (tab[i] > tab[i + 1])
			{
				reg = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = reg;
				bitt++;
			}
		}
		if (bitt == 0)
			size = 0;
	}
}
