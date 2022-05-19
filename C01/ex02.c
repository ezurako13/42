#include <unistd.h>
#include <stdio.h>

void ft_swap(int *a, int *b);

//zaa zort zortlandınız ziyaret edildiniz //aafiyet
int	main(void)
{
	int a;
	int b;

	b = 42;
	a = 31;
	ft_swap(&a, &b);
	printf("\na= %d\nb= %d\n", a, b);
	return (0);
}

void ft_swap(int *a, int *b)
{
	int reg;
	
	reg = *b;
	*b = *a;
	*a = reg;
}
