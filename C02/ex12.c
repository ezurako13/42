#include <unistd.h>
#include <stdio.h>
#include <limits.h>

void *ft_print_memory(void *addr, unsigned int size);
void hex(long long sayi, long long *heksalsayi, int i);
void	hex_bilal(int number);
void prnthex(long long sayi, char *heksalsayi, int i);
void prntstring(char *str, int size);

int	main(void)
{
	//long long sayi = 0xd754c;
	//long long heksalsayi[16] = {};
	//int *pointer = &sayi;

	//printf("\n&pointer= %u\n", &pointer);
	//printf("\n*pointer= %u\n", *pointer);
	//printf("\n pointer= %u\n", pointer);
	
	//write(1, pointer, 16);

	//hex(sayi, heksalsayi, 16);
	////hex_bilal(0xd754c);
	//write(1, "\n", 1);
	//write(1, heksalsayi, 16*4);

	char *string = "\n\nTavuklar\t Ne \bGuzel\nThe hexadecimal address of the first line's first character followed by a ':'.";
	
	write(1, "\n\n\n", 3);
	
	ft_print_memory(string, 15);



  	return (0);
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	char heksalsayi[16];
	int i;
	int o;

	o = 0;
	while (((char *)addr)[o] != '\0')
	{
		prnthex((long long)(addr + o), heksalsayi, 16 - 1);
		write(1, ": ", 2);
		i = 0;
		while (((char *)(addr + o))[i] != '\0' && (unsigned int)i < size)
		{
			prnthex(((char *)(addr + o))[i], heksalsayi, 2 - 1);
			write(1, heksalsayi, 2);
			i++;
			//printf("\ni= %d\n", i);
			if(i % 2 == 0)
				write(1, " ", 1);
		}
		if(i % 2 == 1)
				write(1, " ", 1);
		prntstring(((char *)(addr + o)), size);
		write(1, "\n", 1);
		o += i;
	}
}

void	hex_bilal(int number)
{
	if (number > 15)
		hex_bilal(number / 16);
	write(1, &"0123456789abcdef"[number % 16], 1);
}

void	hex(long long sayi, long long *heksalsayi, int i)
{
	heksalsayi[i] = sayi % 16;
    while (sayi / 16 !=0)
	{
		heksalsayi[i-1] = sayi / 16;
		heksalsayi[i-1]++;
	}
	if (heksalsayi[i-1] > 0)
        hex(heksalsayi[i-1], heksalsayi, i-1);
    heksalsayi[i] = "0123456789abcdef"[heksalsayi[i] % 16];
}

void	prnthex(long long sayi, char *heksalsayi, int i)
{
	if (i > 0)
	{
		prnthex(sayi / 16, heksalsayi, i - 1);
	}
	heksalsayi[i] = "0123456789abcdef"[sayi % 16];
	if (i == 15)
		write(1, heksalsayi, i+1);
}

void	prntstring(char *str, int size)
{
	int	i;

	i = 0;
	while (str[i] != '\0' && (unsigned int)i < size)
	{
		if(str[i] < 32 || str[i] > 126)
			write(1, ".", 1);
		else
			write(1, str + i, 1);
		i++;
	}
}
