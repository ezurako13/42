#include <unistd.h>
#include <stdio.h>

void ft_putstr(char *str);

//zaa zort zortlandınız ziyaret edildiniz //aafiyet
int	main(void)
{
	char string[] = "Hamza agliyo";

	ft_putstr(string);
	return (0);
}

void ft_putstr(char *str)
{
	int i;

	i = -1;
	while (str[i++] != '\0');
	write(1, str, i);
}
