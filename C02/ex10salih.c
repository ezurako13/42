/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   a.c                                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skaragol <skaragol@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 19:06:14 by skaragol          #+#    #+#             */
/*   Updated: 2022/02/16 19:11:44 by skaragol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_strlen(char *src);
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);

int main()
{
	char	src[]="ABCDE";
	char	dest[]="111";
	int	size = 7;
	int	i;
	//printf("%s \n %d",dest,i);

	i = ft_strlcpy(dest, src, size);
	//write(1, source, i+15);
	printf("\n\ngalp= %c %c\n", 3, -13);
	printf("\nchar by char= ");
	for(int a=0; a<10; a++) printf("%c", dest[a]);
	printf("\n\nmem= ");
	for(int a=0; a<10; a++) printf("%d ", dest[a]);
	printf("\n\nprint with printf= %s\n", dest);


	return 0;
}

int ft_strlen(char *src)
{
	int i;
	i = 0;
	while (src[i] != '\0')
	{
		i++;
	}
	return (i+1);
}
unsigned int    ft_strlcpy(char *dest, char *src, unsigned int size)
{
	int i;
	int a;
	i = 0;
	a = ft_strlen(src);
	if (size > a)
		size = a;
	while (i + 1 < size && size <= ft_strlen(src))
	{
		dest[i] = src[i];
		i++;
	}
	if (size > 0)
		dest[i] = '\0';
	return (a);
}
