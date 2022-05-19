#include <unistd.h>

int ft_str_is_uppercase(char *str);

int	main(void)
{
	char	source[]= "S";
	int sonuc= ft_str_is_uppercase(source)+48;

	write(1, &sonuc, 1);
	return (0);
}


int ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if(str[i] <= 'A' || str[i] >= 'Z')
			return (0);
		i++;
	}
	return (1);
}
