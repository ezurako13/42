#include <unistd.h>

void	putstr(char *string);

int	main(int argsayisi, char **stringler)
{
	putstr(stringler[0]);
	return (0);
}

void	putstr(char *string)
{
	int	i;
	
	i = -1;
	while (string[++i] != '\0')
		write(1, &string[i], 1);
}
