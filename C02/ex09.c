#include <unistd.h>

char *ft_strcapitalize(char *str);

int	main(void)
{
	char	source[]= "salut, commEnt tu vas ? 42mots quarante-deux; cinquante+et+un";

	write(1, ft_strcapitalize(source), 61);
	return (0);
}


char *ft_strcapitalize(char *str)
{
	int	i;
    char prev;

    prev = '\0';
	i = 0;
	while (str[i] != '\0')
	{
		if(str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
	i = 0;
	while (str[i] != '\0')
	{
        if (!(prev >= 'a' && prev <= 'z') && !(prev >= 'A' && prev <= 'Z'))
		    if (!(prev >= '0' && prev <= '9'))
                if (str[i] >= 'a' && str[i] <= 'z')
                    str[i] -= 32;
        prev = str[i];
		i++;
	}
	return (str);
}
