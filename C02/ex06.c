#include <unistd.h>

int ft_str_is_printable(char *str);

int	main(void)
{
	char	source[]= "\n";
	int sonuc= ft_str_is_printable(source)+48;

	write(1, &sonuc, 1);
	return (0);
}


int ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if(str[i] <= 32 || str[i] >= 126)
			return (0);
		i++;
	}
	return (1);
}
