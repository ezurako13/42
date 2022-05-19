#include<unistd.h>

void ft_putchar(char c);
void rush(int x, int y);


int main () 
{
    rush(5,3);
    return 0;
}


void rush(int x,int y)
{
	int dik;
	dik=1;
	int yat;

	while(dik<=y)
	{
		yat=1;
		while(yat<=x)
		{
			if (((yat == 1) && (dik == 1)) || ((yat == x) && (dik == y)))
				ft_putchar('/');
			else if((dik==1) && (yat==x) || (dik==y) && (yat==1))
				ft_putchar('\\');
			else if (((dik==1 || dik==y) && (yat>1 && yat <x)))
				ft_putchar('a');
			else if((dik !=1 || dik !=y) && ((yat==1) || (yat==x )))
				ft_putchar('b');
			else
				ft_putchar(' ');
			yat++;
		}

		ft_putchar('\n');
    	dik++;
  	}
}


void ft_putchar(char c)
{
  write(1,&c,1);
}