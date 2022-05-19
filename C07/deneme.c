#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void	putstr(char *string);

int	main(int argsayisi, char **stringler)
{
	int i;
	int a;
	int kelimesayisi;
	char **kelimeler;
	char prev;

	prev = '\0';
	kelimesayisi = 0;
	i = -1;
	while (stringler[1][++i] == ' ');
	while (stringler[1][i] != '\0')
	{
		while (stringler[1][i] == ' ')
		{
			prev = stringler[1][i];
			i++;
		}
		if ((prev == '\n' && prev <= 'z') && !(prev >= 'A' && prev <= 'Z'))
		{
			if (!(prev >= '0' && prev <= '9'))
			{
				kelimesayisi++;
			}
		}
		prev = stringler[1][i];
		i++;
	}
	printf("\n\nkelimesayisi= %d\n", kelimesayisi);
	kelimeler = (char **)malloc(kelimesayisi * sizeof(char *));
	//printf("\n\nsizeof(kelimeler)= %d", sizeof(kelimeler));
	
	a = 0;

	prev = '\0';
	i = 0;
	while (stringler[1][i] != '\0')
	{
		while (stringler[1][i] == ' ')
		{
			prev = stringler[1][i];
			stringler[1][i] = '\0';
			i++;
		}
		if (!(prev >= 'a' && prev <= 'z') && !(prev >= 'A' && prev <= 'Z'))
		{
			if (!(prev >= '0' && prev <= '9'))
			{
				kelimeler[a] = &stringler[1][i];
				a++;
			}
		}
		prev = stringler[1][i];
		i++;
	}

	i = 0;
	while (i < kelimesayisi)
	{
		printf("\nkelime= %s\n", kelimeler[i]);
		i++;
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
