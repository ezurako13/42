#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int ft_iterative_factorial(int nb);

int main()
{
	char cahrp[]= "\n\nAah... Ne tatli sozler hazirladim. Kim bilir kac aydir.\n";
	printf("\n\nfactorial= %d\n",ft_iterative_factorial(5));

	return (0);
}

int ft_iterative_factorial(int nb)
{
	int sayi;

	sayi = 1;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	while(nb != 0)
	{
		sayi *= nb;
		nb--;
	}

	return (sayi);
}
