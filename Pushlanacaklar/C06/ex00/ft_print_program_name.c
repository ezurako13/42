/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agokturk <agokturk@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 15:32:20 by agokturk          #+#    #+#             */
/*   Updated: 2022/02/27 15:32:20 by agokturk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	putstr(char *string);

int	main(int argsayisi, char **stringler)
{
	if (argsayisi != 0)
		putstr(stringler[0]);
	return (0);
}

void	putstr(char *string)
{
	int	i;

	i = -1;
	while (string[++i] != '\0')
		write(1, &string[i], 1);
}
