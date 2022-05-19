#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int		ft_atoi_base(char *str, char *base);
int		varmi(char harf, char *base);
int		kac(char harf, char *base);
void	negaatif(int *negatif, char *str, int *i);
int		baseincele(char *base);

int	main(void)
{
	char	cahrp[]= "  ---00f";
	
	printf("\n\nft_atoi => %d\n",ft_atoi_base(cahrp, "0123456789abcdef"));

	printf("\natoi => %d\n",atoi(cahrp));

	return (0);
}

int	baseincele(char *base)
{
	int		taban;
	char	harfs[128];

	taban = -1;
	while (++taban < 128)
		harfs[taban] = 0;
	taban = 0;
	while (base[taban] != '\0')
	{
		if (base[taban] == '-' || base[taban] == '+' || harfs[base[taban]] > 0)
			return (0);
		harfs[base[taban]]++;
		taban++;
	}
	return (taban);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	sayi;
	int	negatif;
	int	taban;

	taban = baseincele(base);
	if (taban < 2 || base[0] == '\0')
		return (0);
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
