/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agokturk <agokturk@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 15:13:01 by agokturk          #+#    #+#             */
/*   Updated: 2022/02/27 15:13:01 by agokturk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	int	i;
	int	lend;
	int	lens;

	lend = -1;
	while (dest[++lend] != '\0')
		;
	lens = -1;
	while (src[++lens] != '\0')
		;
	i = -1;
	while (src[++i] != '\0' && (unsigned int)i < size - lend - 1)
		dest[lend + i] = src[i];
	if ((unsigned int)i < size - 1)
		dest[lend + i + 1] = '\0';
	else
		dest[lend + i] = '\0';
	if (size < (unsigned int)lend)
		return (lend + size + 1);
	return (lend + lens);
}
