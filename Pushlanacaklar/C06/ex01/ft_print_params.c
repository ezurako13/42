/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agokturk <agokturk@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 15:31:34 by agokturk          #+#    #+#             */
/*   Updated: 2022/02/27 15:31:34 by agokturk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	putstr(char *string);

int	main(int argsayisi, char **stringler)
{
	int	i;

	i = 1;
	while (i < argsayisi)
	{
		putstr(stringler[i]);
		i++;
	}
	return (0);
}

void	putstr(char *string)
{
	int	i;

	i = -1;
	while (string[++i] != '\0')
		write(1, &string[i], 1);
}
