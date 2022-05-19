#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int ft_strlen(char *str);

int main()
{
	char cahrp[]= "\n\nAah... Ne tatli sozler hazirladim. Kim bilir kac aydir.\n";
	printf("\n\nlens= %d\n", ft_strlen(cahrp));

	return (0);
}

int ft_strlen(char *str)
{
	int i;

	i = -1;
	while (str[++i] != '\0');
	return (i);
}
