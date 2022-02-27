/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agokturk <agokturk@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 15:12:48 by agokturk          #+#    #+#             */
/*   Updated: 2022/02/27 15:12:48 by agokturk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	o;

	o = -1;
	i = -1;
	while (dest[++i] != '\0')
		;
	i -= 1;
	while (src[++o] != '\0')
		dest[++i] = src[o];
	dest[i + 1] = '\0';
	return (dest);
}