#include <unistd.h>
#include <stdio.h>

void ft_rev_int_tab(int *tab, int size);

//zaa zort zortlandınız ziyaret edildiniz //aafiyet
int	main(void)
{
	int array[] = {1, 31, 5, 8, 99, 15, 0};
	int len_array;

	len_array = * (&array + 1) - array;
	printf("\n\tlen_array= %d\n", len_array);
	
	printf("\nilk array=\t");
	for(int i=0; i<len_array; i++) printf("%d ", array[i]);

	ft_rev_int_tab(array, len_array);
	printf("\nReverse array=\t");
	for(int i=0; i<len_array; i++) printf("%d ", array[i]);
	
	return (0);
}

void ft_rev_int_tab(int *tab, int size)
{
	int i;
	int reg;

	i = 0;
	while (i < size / 2)
	{
		reg = tab[i];
		tab[i] = tab[size - i - 1];
		tab[size - i - 1] = reg;
		i++;
	}
}
