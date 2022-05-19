#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void	putstr(char *string);

int	main(int argsayisi, char **stringler)
{
	int i;

	
	while (argsayisi > 1)
	{
		putstr(stringler[argsayisi - 1]);
		argsayisi--;
	}
	
	

	return (0);
}

void	putstr(char *string)
{
	int	i;
	
	i = -1;
	while (string[++i] != '\0')
		write(1, &string[i], 1);
}
