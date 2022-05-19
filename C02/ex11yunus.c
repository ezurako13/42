#include <stdio.h>
#include <unistd.h>

void  ft_putstr_non_printable(char *str);
void  ft_conver_to_hex(char c);
void  ft_hex_devam(void);

int  main(void)
{
	char a[22]="Coucop\t\ttu \nvas bien ?";
	a[3] = 127;
	ft_putstr_non_printable(a);
}

void ft_hex_devam(void)
{

}

void  ft_convert_to_hex(char c)
{
	// printf("%d ", c);
	char a;
	a = 'W';
	char b;
	b = c;
	char d;
	d=c/16+48;
	b=c%16;
	if(b<10)
		b+=48;
	else
		b+=a;
	//  b+=a;
	write(1,"\\",2);
	write(1,&d,1);
	write(1,&b,1);
}

void  ft_putstr_non_printable(char  *str)
{
	int i;
	i = 0;
	while (str[i] != '\0' )
	{
		// write(1,&str[i],1);
		if((str[i] < ' ' || str[i] > 126) /*&& (str[i+1] != '\0')*/)
		{
			//printf("\\");
			// i++;
			// write(1,&str[i+1],1);
			//   printf("\n%c", str[i]);
			//  printf("\n%d", str[i+1]);
			ft_convert_to_hex(str[i]);
			i++;
		}
		else
		{
			write(1,&str[i],1);
			i++;
		}
	}
}