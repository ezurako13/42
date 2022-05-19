#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int ft_sqrt(int nb);

int main()
{
	char cahrp[]= "\n\nAah... Ne tatli sozler hazirladim. Kim bilir kac aydir.\n";
	int n= 0x7fffffff;
	printf("\n\nsqrt of %d= %d\n",n, ft_sqrt(n));

	return (0);
}

int ft_sqrt(int nb)
{
	int kontrol;
	int kontrolkare;

	kontrol = 0;
	kontrolkare = kontrol * kontrol;
	while (kontrolkare <= nb && kontrol < 46341)
	{
		kontrolkare = ++kontrol * kontrol;
		if (kontrolkare == nb)
			return (kontrol);
	}
	return (0);
}
