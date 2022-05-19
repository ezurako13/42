#include <unistd.h>

void ft_putstr_non_printable(char *str);
void hex(unsigned char nnprntbl, char *sonuc, int i);

int	main(void)
{
	write(1, "\n\n", 2);
	for(int i= 0; i<256; i++)
	{	
		char	source= i;
		ft_putstr_non_printable((char *)(&i));
	}
	write(1, "\n\n", 2);
	//write(1, &source, (*(&source+1) - source));

	return (0);
}

void ft_putstr_non_printable(char *str)
{
	int	i;
	int o;
	char	ff[2];

	o = 0;
	i = 0;
	while (str[i] != '\0')
	{
		//if (str[i] < 0)
		if (str[i] < 32 || str[i] > 126)
		{
			write(1, "\\", 1);
			hex(str[i], ff, 0);
			write(1, ff, 2);
		}
		else
			write(1, str + i, 1);
		i++;
	}
}

void hex(unsigned char nnprntbl, char *sonuc, int i)
{
	sonuc[0] = 0;
	sonuc[1] = "0123456789abcdef"[nnprntbl % 16];
	while (nnprntbl / 16 != 0)
	{
		nnprntbl -= 16;
		sonuc[0]++;
	}
	sonuc[0] = "0123456789abcdef"[sonuc[0] % 16];
	
}
