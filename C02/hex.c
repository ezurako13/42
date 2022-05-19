#include <unistd.h>
#include <stdio.h>

void *ft_print_memory(void *addr, unsigned int size);
void hex(int sayi, int heksalsayi[16], int basamaksayisi);
void	hex_bilal(int number);

int	main(void)
{
	int sayi = 0xd754c;
	int heksalsayi[16] = {};
	int *pointer = &sayi;

int len_hex= *(&heksalsayi+1) - heksalsayi;
	printf("\n\nlen_hex= %d\n\n", len_hex); 
	
	//printf("\n&pointer= %u\n", &pointer);
	//printf("\n*pointer= %u\n", *pointer);
	//printf("\n pointer= %u\n", pointer);
	
	//write(1, pointer, 16);

	hex(sayi, heksalsayi, 16);
	//hex_bilal(0xd754c);
	write(1, "\n", 1);
	write(1, heksalsayi, 16*4);
  	return (0);
}

void	hex_bilal(int number)
{
	if (number > 15)
		hex_bilal(number / 16);
	write(1, &"0123456789abcdef"[number % 16], 1);
}

void hex(int sayi, int heksalsayi[16], int i)
{
	
	heksalsayi[i] = sayi % 16;
    while (sayi / 16 !=0)
	{
		sayi -= 16;
		heksalsayi[i-1]++;
	}
	if (heksalsayi[i-1] > 0)
        hex(heksalsayi[i-1], heksalsayi, i-1);
    heksalsayi[i] = "0123456789abcdef"[heksalsayi[i] % 16];
}
