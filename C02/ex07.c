#include <unistd.h>

char *ft_strupcase(char *str);

int	main(void)
{
	char	source[]= "vdfvt34.5bgd";

	write(1, ft_strupcase(source), 12);
	return (0);
}


char *ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
        if (str[i] >= 'a' && str[i] <= 'z')
		    str[i] -= 32;
		i++;
	}
	return (str);
}
