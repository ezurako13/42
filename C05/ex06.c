#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int ft_is_prime(int nb);

int main()
{
	char cahrp[]= "\n\nAah... Ne tatli sozler hazirladim. Kim bilir kac aydir.\n";
	int n= 2;
	printf("\n\nIs %d prime? => %d\n",n, ft_is_prime(n));

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
