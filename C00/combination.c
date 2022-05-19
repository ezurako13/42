#include<stdio.h>

int combination(int n);
int permutation()

int main()
{
	int n= 4;
	printf("10'un %d'lisi= %d", n, combination(n));
	return 0;
}

int combination(int un, int lu)
{
	int sonuc= 1;
	int i;

	i = 0;
	while (10-i >= lu)
	{
		sonuc *= 10 - i;
		i++;
		printf("\ns= %d",sonuc);
	}
	return (sonuc/combination(un, un - lu));
}
