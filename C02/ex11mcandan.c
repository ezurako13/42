/* ************************************************************************** */
/*                                      */
/*                            :::   ::::::::  */
/*  ft_putstr_non_printable.c             :+:   :+:  :+:  */
/*                          +:+ +:+     +:+   */
/*  By: mcandan <mcandan@student.42kocaeli.com.tr +#+ +:+    +#+    */
/*                        +#+#+#+#+#+  +#+      */
/*  Created: 2022/02/22 11:05:58 by mcandan      #+#  #+#       */
/*  Updated: 2022/02/22 11:06:06 by mcandan     ###  ########.fr    */
/*                                      */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);
void	ft_dec_to_hex(unsigned char n);
void	ft_putstr_non_printable(char *str);

int	main(void)
{
	write(1, "\n\n", 2);
	for(int i= 0; i<256; i++)
	{	
		char	source= i;
		ft_putstr_non_printable((char *)(&i));
	}
	write(1, "\n\n", 2);
	//write(1, &source, (*(&source+1) - source));

	return (0);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
void	ft_dec_to_hex(unsigned char n)
{
	char	*base;
	base = "0123456789abcdef";
	ft_putchar(base[n / 16]);
	ft_putchar(base[n % 16]);
}
void	ft_putstr_non_printable(char *str)
{
	int	i;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] == 127)
		{
			ft_putchar('\\');
			ft_dec_to_hex(str[i]);
		}
		else
			ft_putchar(str[i]);
		i++;
	}
}