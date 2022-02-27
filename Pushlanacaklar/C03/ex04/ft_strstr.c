/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agokturk <agokturk@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 15:13:21 by agokturk          #+#    #+#             */
/*   Updated: 2022/02/27 15:13:21 by agokturk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	o;
	int	leno;

	leno = -1;
	while (to_find[++leno] != '\0')
		;
	o = 0;
	i = -1;
	while (str[++i] != '\0')
	{
		while (str[i + o] == to_find[o] && to_find[o] != '\0')
			o++;
		if (o == leno)
			return (str + i);
		o = 0;
	}
	return (0);
}
