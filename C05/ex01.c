#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int ft_recursive_factorial(int nb);

int main()
{
	char cahrp[]= "\n\nAah... Ne tatli sozler hazirladim. Kim bilir kac aydir.\n";
	printf("\n\nfactorial= %d\n",ft_recursive_factorial(5));

	return (0);
}

int ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	return (nb * ft_recursive_factorial(nb - 1));
}
