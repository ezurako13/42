#include <unistd.h>
#include <stdio.h>

int ft_strlen(char *str);

//zaa zort zortlandınız ziyaret edildiniz //aafiyet
int	main(void)
{
	char string[] = "Hamza agliyo";

	printf("\nlen_string= %d\n", ft_strlen(string));
	return (0);
}

int ft_strlen(char *str)
{
	int i;

	i = -1;
	while (str[i++] != '\0');
	return (i-1);
}
