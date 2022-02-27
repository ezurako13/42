/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agokturk <agokturk@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 15:31:56 by agokturk          #+#    #+#             */
/*   Updated: 2022/02/27 15:31:56 by agokturk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	putstr(char *string);
int		ft_strcmp(char *s1, char *s2);
void	printstringleri(int argsayisi, char **stringler);

int	main(int argsayisi, char **stringler)
{
	int		i;
	int		devamke;
	char	*yedekpointer;

	i = 1;
	devamke = 1;
	while (devamke == 1)
	{
		devamke = 0;
		while (i < argsayisi - 1)
		{
			if (ft_strcmp(stringler[i], stringler[i + 1]) > 0)
			{	
				yedekpointer = stringler[i];
				stringler[i] = stringler[i + 1];
				stringler[i + 1] = yedekpointer;
				devamke = 1;
			}
			i++;
		}
		if (i == argsayisi - 1)
			i = 1;
	}
	printstringleri(argsayisi, stringler);
	return (0);
}

void	putstr(char *string)
{
	int	i;

	i = -1;
	while (string[++i] != '\0')
		write(1, &string[i], 1);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] < s2[i])
			return (-1);
		if (s1[i] > s2[i])
			return (1);
		i++;
	}
	return (0);
}

void	printstringleri(int argsayisi, char **stringler)
{
	int	i;

	i = 1;
	while (i < argsayisi)
	{
		putstr(stringler[i]);
		write(1, "\n", 1);
		i++;
	}
}
