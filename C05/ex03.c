#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int ft_recursive_power(int nb, int power);

int main()
{
	char cahrp[]= "\n\nAah... Ne tatli sozler hazirladim. Kim bilir kac aydir.\n";
	int n= 2;
	int us= 5;
	printf("\n\n%d^%d= %d\n",n ,us ,ft_recursive_power(n, us));

	return (0);
}

int ft_recursive_power(int nb, int power)
{
	if (power <= 0)
		return (1);
	return (nb * ft_recursive_power(nb, power - 1));
}
