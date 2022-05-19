#include <unistd.h>
#include <stdio.h>
#include <string.h>

int ft_strncmp(char *s1, char *s2, unsigned int n);

int main(void)
{	char s1[]= "Tavuklar ah tavuklar";
	char s2[] = "Tavuklar ah tavuklar";
	int n= -2;

	int fark = ft_strncmp(s1, s2, n);
	printf("\n\nft_strcmp=>\t%d\n", fark);

	fark = strncmp(s1, s2, n);
	printf("\n\nstrcmp=>\t%d\n", fark);
	return (0);
}


int ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int i;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && n > i)
	{
		if (s1[i] < s2[i])
			return (-1);
		if (s1[i] > s2[i])
			return (1);
		i++;
	}
	return (0);
}
