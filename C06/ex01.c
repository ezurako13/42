#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void	putstr(char *string);

int	main(int argsayisi, char **stringler)
{
	int i;

	i = 1;
	while (i < argsayisi)
	{
		putstr(stringler[i]);
		i++;
	}
	
	printf("\n\nsizeof(1)= %d\nsizeof(2)= %d", sizeof(stringler[1]), sizeof(stringler[2]));

	return (0);
}

void	putstr(char *string)
{
	int	i;
	
	i = -1;
	while (string[++i] != '\0')
		write(1, &string[i], 1);
}
