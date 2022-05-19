#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int ft_find_next_prime(int nb);
int ft_is_prime(int nb);

int main()
{
	char cahrp[]= "\n\nAah... Ne tatli sozler hazirladim. Kim bilir kac aydir.\n";
	int n= 0x7fffffff;
	printf("\n\nNext prime after %d is %d\n",n, ft_find_next_prime(n));

	return (0);
}

int ft_find_next_prime(int nb)
{
	int kontrol;
	
	if (nb == 0x7fffffff)
		return (0);
	kontrol = nb+1;
	if (kontrol < 2)
		kontrol = 2;
	while (kontrol <= 0x7fffffff)
	{
		if(ft_is_prime(kontrol))
			return (kontrol);
		kontrol++;
	}
	return (0);
}

int ft_is_prime(int nb)
{
	int kontrol;
	
	if (nb < 2)
		return (0);
	kontrol = nb-1;
	while (kontrol <= nb && kontrol > 1)
	{
		if(nb % kontrol == 0)
			return (0);
		kontrol--;
	}
	return (1);
}
