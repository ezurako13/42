#include <unistd.h>
#include <stdio.h>

void ft_print_combn(int n);
void yazdir(int sayi, int n);
int	combination(int n);

int main()
{
	int n = 1;

	ft_print_combn(n);

	return 0;
}


void ft_print_combn(int n)
{
	int sayi=0; int sayc[9];
	int i = 0;
	while (i < combination(n))
	{
		while (((sayi/10)%10 >= (sayi/1)%10) && n > 1)
		{
			while (((sayi/100)%10 >= (sayi/10)%10) && n > 2)
			{
				while (((sayi/1000)%10 >= (sayi/100)%10) && n > 3)
				{
					while (((sayi/10000)%10 >= (sayi/1000)%10) && n > 4)
					{
						while (((sayi/100000)%10 >= (sayi/10000)%10) && n > 5)
						{
							while (((sayi/1000000)%10 >= (sayi/100000)%10) && n > 6)
							{
								while (((sayi/10000000)%10 >= (sayi/1000000)%10) && n > 7)
								{
									while (((sayi/100000000)%10 >= (sayi/10000000)%10) && n > 8)
									{

										sayi += 10000000;
									}
									sayi += 1000000;
								}
								sayi += 100000;
							}
							sayi += 10000;
						}
						sayi += 1000;
					}
					sayi += 100;
				}
				sayi += 10;
			}
			sayi += 1;
		}
		yazdir(sayi, n);
		if (i < combination(n)-1)
			write(1, ", ", 2);
		sayi++;
		i++;
	}
		
}

void yazdir(int sayi, int n)
{
	int basamaklar[9]= {};
	int i;

	i = n - 1;
	while (i >= 0)
	{
		basamaklar[i] = sayi % 10;
		sayi /= 10;
		i--;
	}
	i = 0;
	while (i < n)
	{
		basamaklar[i] += 48;
		write(1, &basamaklar[i], 1);
		i++;
	}
}

int	combination(int n)
{
	if (n == 1) return (10);
	if (n == 2) return (45);
	if (n == 3) return (120);
	if (n == 4) return (210);
	if (n == 5) return (252);
	if (n == 6) return (210);
	if (n == 7) return (120);
	if (n == 8) return (45);
	if (n == 9) return (10);
}
