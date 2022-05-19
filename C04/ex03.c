#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int ft_atoi(char *str);

int	main()
{
	char cahrp[]= "  -2147483648";
	printf("\n\nft_atoi => %d\n",ft_atoi(cahrp));

	printf("\natoi => %d\n",atoi(cahrp));

	return (0);
}

int ft_atoi(char *str)
{
	int i;
	int sayi;
	int negatif;

	negatif = 0;
	sayi = 0;
	i = -1;
	while (str[++i] == ' ' || str[i] == '\t' || str[i] == '\v')
		;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
		negatif++;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		sayi = sayi * 10 - (int)(str[i] - '0');
		i++;
	}
	if(negatif % 2 == 1)
		return (sayi);
	return (sayi * (-1));
}
