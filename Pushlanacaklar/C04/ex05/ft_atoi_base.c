/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agokturk <agokturk@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 15:11:03 by agokturk          #+#    #+#             */
/*   Updated: 2022/02/27 15:11:03 by agokturk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		varmi(char harf, char *base);
int		kac(char harf, char *base);
void	negaatif(int *negatif, char *str, int *i);

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	sayi;
	int	negatif;
	int	taban;

	taban = -1;
	while (base[++taban] != '\0')
		;
	negatif = 0;
	sayi = 0;
	i = -1;
	while (str[++i] == ' ' || str[i] == '\t' || str[i] == '\v')
		;
	negaatif(&negatif, str, &i);
	while (varmi(str[i], base))
	{
		sayi = sayi * taban - kac(str[i], base);
		i++;
	}
	if (negatif % 2 == 1)
		return (sayi);
	return (sayi * (-1));
}

int	varmi(char harf, char *base)
{
	int	i;

	i = -1;
	while (base[++i] != '\0' && base[i] != harf)
		;
	if (base[i] == '\0')
		return (0);
	return (1);
}

int	kac(char harf, char *base)
{
	int	i;

	i = -1;
	while (base[++i] != '\0' && base[i] != harf)
		;
	return (i);
}

void	negaatif(int *negatif, char *str, int *i)
{
	while (str[*i] == '+' || str[*i] == '-')
	{
		if (str[*i] == '-')
		(*negatif)++;
		(*i)++;
	}
}
