/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agokturk <agokturk@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 13:30:11 by agokturk          #+#    #+#             */
/*   Updated: 2022/02/27 13:30:11 by agokturk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int		i;
	char	prev;

	prev = '\0';
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
	i = 0;
	while (str[i] != '\0')
	{
		if (!(prev >= 'a' && prev <= 'z') && !(prev >= 'A' && prev <= 'Z'))
			if (!(prev >= '0' && prev <= '9'))
				if (str[i] >= 'a' && str[i] <= 'z')
					str[i] -= 32;
		prev = str[i];
		i++;
	}
	return (str);
}
