#include <unistd.h>
#include <stdio.h>

void ft_div_mod(int a, int b, int *div, int *mod);

//zaa zort zortlandınız ziyaret edildiniz //aafiyet
int	main(void)
{
	int a;
	int b;
	int div;
	int mod;

	b = 3;
	a = 16;

	ft_div_mod(a, b, &div, &mod);
	printf("\ndiv= %d\nmod= %d\n", div, mod);
	return (0);
}

void ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
