#include <unistd.h>

int ft_str_is_alpha(char *str);

int	main(void)
{
	char	source[]= "";
	int sonuc= ft_str_is_alpha(source)+48;

	write(1, &sonuc, 1);
	return (0);
}


int ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if(str[i] <= 'A' || (str[i] >= 'Z' && str[i] <= 'a') || str[i] >= 'z')
			return (0);
		i++;
	}
	return (1);
}
