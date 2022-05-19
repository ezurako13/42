/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agokturk <agokturk@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 11:15:16 by ercdeniz          #+#    #+#             */
/*   Updated: 2022/02/17 20:45:15 by agokturk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size);

int main()
{
	srand(time(0));
	int tab[4]= {3, 8, 1, 5};

	//for(int i=0; i<4; i++) tab[i]= ;

	printf("\ntabilk= ");
	for(int i=0; i<5; i++) printf("%d ", tab[i]);
	ft_sort_int_tab(tab, 4);
	printf("\ntabson= ");
	for(int i=0; i<5; i++) printf("%d ", tab[i]);
	
	return (0);
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	a;
	int	swap;

	a = 0;
	while (a < (size-1))
	{
		if (tab[a] > tab[a + 1])
		{
			swap = tab[a];
			tab[a] = tab[a + 1];
			tab[a + 1] = swap;
			a = -1;
		}
		printf("\ntab= ");
		for(int i=0; i<4; i++) printf("%d ", tab[i]);
		a++;
	}
}
