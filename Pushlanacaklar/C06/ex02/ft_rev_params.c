/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agokturk <agokturk@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 15:32:23 by agokturk          #+#    #+#             */
/*   Updated: 2022/02/27 15:32:23 by agokturk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	putstr(char *string);

int	main(int argsayisi, char **stringler)
{
	while (argsayisi > 1)
	{
		putstr(stringler[argsayisi - 1]);
		argsayisi--;
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
