#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void ft_putstr(char *str);

int main()
{
	char cahrp[]= "\n\nAah... Ne tatli sozler hazirladim. Kim bilir kac aydir.\n";
	ft_putstr(cahrp);

	return (0);
}

void ft_putstr(char *str)
{
	int i;

	i = -1;
	while (str[++i] != '\0')
		write(1, str+i, 1);
	
}
