#include <unistd.h>
#include <stdio.h>
#include <string.h>

int ft_strcmp(char *s1, char *s2);

int main(void)
{	char s1[]= "ooa";
	char s2[31] = "ooaaa";

	int fark = ft_strcmp(s1, s2);
	printf("\n\nft_strcmp=>\t%d\n", fark);

	fark = strcmp(s1, s2);
	printf("\n\nstrcmp=>\t%d\n", fark);
	return (0);
}


int ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] < s2[i])
			return (-1);
		if (s1[i] > s2[i])
			return (1);
		i++;
	}
	return (0);
}
