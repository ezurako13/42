#include <unistd.h>

char *ft_strlowcase(char *str);

int	main(void)
{
	char	source[]= "vAFG34.5bgd";

	write(1, ft_strlowcase(source), 12);
	return (0);
}


char *ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
        if (str[i] >= 'A' && str[i] <= 'Z')
		    str[i] += 32;
		i++;
	}
	return (str);
}
