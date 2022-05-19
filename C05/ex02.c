#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int ft_iterative_power(int nb, int power);

int main()
{
	char cahrp[]= "\n\nAah... Ne tatli sozler hazirladim. Kim bilir kac aydir.\n";
	int n= 2;
	int us= -1;
	printf("\n\n%d^%d= %d\n",n ,us ,ft_iterative_power(n, us));
	return (0);
}

int ft_iterative_power(int nb, int power)
{
	int sayi;

	sayi = 1;
	if (power <= 0)
		return (1);
	power++;
	while(--power)
		sayi *= nb;
	return (sayi);
}
