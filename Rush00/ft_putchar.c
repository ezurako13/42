#include <unistd.h>

void	ft_putchar(char yaz)
{
	write(1, &yaz, 1);
	return ;
}
