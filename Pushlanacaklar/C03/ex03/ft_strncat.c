/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agokturk <agokturk@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 15:13:06 by agokturk          #+#    #+#             */
/*   Updated: 2022/02/27 15:13:06 by agokturk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int	i;
	int	lend;

	lend = 0;
	while (dest[lend] != '\0')
		lend++;
	i = -1;
	while (src[++i] != '\0' && (unsigned int)i < nb)
		dest[lend + i] = src[i];
	dest[lend + i] = '\0';
	return (dest);
}
