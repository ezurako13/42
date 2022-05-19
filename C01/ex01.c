#include <unistd.h>
#include <stdio.h>

void ft_ultimate_ft(int *********nbr);

//zaa zort zortlandınız ziyaret edildiniz //aafiyet
int	main(void)
{
	int a;
	
	a = 31;
	ft_ultimate_ft(&a);
	printf("\na= %d\n", a);
	return (0);
}

void ft_ultimate_ft(int *********nbr)
{
	*********nbr = 42;
}
