#include <unistd.h>
#include <stdio.h>

void ft_ultimate_div_mod(int *a, int *b);

//zaa zort zortlandınız ziyaret edildiniz //aafiyet
int	main(void)
{
	int a;
	int b;
	
	b = 3;
	a = 16;

	ft_ultimate_div_mod(&a, &b);
	printf("\ndiv= %d\nmod= %d\n", a, b);
	return (0);
}

void ft_ultimate_div_mod(int *a, int *b)
{
	int rega;

	rega = *a;
	*a = rega / *b;
	*b = rega % *b;
}
