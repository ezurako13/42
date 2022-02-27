/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agokturk <agokturk@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 13:07:51 by agokturk          #+#    #+#             */
/*   Updated: 2022/02/27 13:07:51 by agokturk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int	i;

	i = 0;
	while ((unsigned int)i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while ((unsigned int)i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
