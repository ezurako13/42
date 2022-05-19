#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void ft_sort_int_tab(int *tab, int size);

//zaa zort zortlandınız ziyaret edildiniz //aafiyet
int	main(void)
{
	srand(time(0));
    int array[20];
	int len_array;

	for(int i=0; i<20; i++) array[i]=rand()%70+30;

	len_array = * (&array + 1) - array;
	printf("\n\tlen_array=  %d\n", len_array);
	
	printf("\n\tarray=\t");
	for(int i=0; i<len_array; i++) printf("%d ", array[i]);

	ft_sort_int_tab(array, len_array);
	//printf("\nSorted array=\t");
	//for(int i=0; i<len_array; i++) printf("%d ", array[i]);

	return (0);
}

void ft_sort_int_tab(int *tab, int size)
{
	int i;
	int o;
	int reg;
	int bitt;

	bitt = 0;
	o = -1;
	while (++o < size - 1)
	{
		i = -1;
		bitt = 0;
		while(++i < size - 1 - o)
		{
			if (tab[i] > tab[i + 1])
			{
				reg = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = reg;
				bitt++;
			}
		}
		if(bitt == 0)
			size = 0;
	}
}
