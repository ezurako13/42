#include<stdio.h>
#include<unistd.h>

void	ft_ft(int *nbr)
{
	int	a;

	a = 42;
	*nbr = a;
}

void	ft_ultimate_ft(int *****nbr)
{
	int a[1][1][1][1][1][1][1][1][1] = {};
	nbr = a;
	*****nbr = 31;
}

void	ft_swap(int *a, int*b) // int a; int b; temp;    temp=a;    a=b; b=temp;
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

void	ft_div_mod(int a, int b, int *div, int *mod)
{	
	if(b != 0)
	{
	
	*div = a / b;
	*mod = a % b;
	printf("%d     %d     %d      %d\n",a,b,*div,*mod);
	}
}

void	ft_ultimate_div_mod(int *a, int *b)
{
		int div;
		int rem;
		
		if(*b != 0)
		{
			div = *a / *b;
			rem = *a % *b;
			*a = div;
			*b = rem;
		}		
}

void	ft_putstr(char *str)
{
	int	a;

	a = 0;
	while (str[a] != '\0')
	{
		write(1, &str[a], 1);
		a++;
	}
}

int		ft_strlen(char *str){
	int a;
	
	a = 0;
	while(str[a] != '\0')
	{
		a++;
	}
		
	return a;
}

void	ft_rev_int_tab(int *tab, int size)
{
	int i;
	
	i = 0;
	while(i < size/2)
	{	
		int temp;
		temp = tab[i];
		tab[i] = tab[size - i - 1];
		tab[size - i - 1] = temp;
		i++;
	}
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int temp;
	
	i = 0;
	j = 0;
	while(i<size){
		while(j<size){
			if(tab[j-1] > tab[j] )
			{
				temp = tab[j-1];
				tab[j-1] = tab[j];
				tab[j] = temp;
			}
			j++;
		}
		j = 0;
		i++;
	}
}
int	main(void)
{
	// iki for sort için 
	int array[5]={1,5,2,8,0};
	int i;
	int j;
	int temp;
	int size=5;
	ft_sort_int_tab(array,size);
/*	for(i=0; i<size; i++) {
		for(j=0; j<size; j++) {
			if(array[j-1]>array[j])
			{   
				temp=array[j-1];
				array[j-1]=array[j];
				array[j]= temp;
			}
		}
		j=0;
	}  */
	
	for(i=0; i<size; i++) {
		printf("%d",array[i]);
	}
	

				array[j-1]=array[j];
				array[j]= temp;
			}
		}
		j=0;
	}  */
	
	for(i=0; i<size; i++) {
		printf("%d",array[i]);
	}
	
	return (0);
}]=array[j];
				array[j]= temp;
			}
		}
		j=0;
	}  */
	
	for(i=0; i<size; i++) {
		printf("%d",array[i]);
	}
	

				array[j-1]=array[j];
				array[j]= temp;
			}
		}
		j=0;
	}  */
	
	for(i=0; i<size; i++) {
		printf("%d",array[i]);
	}
	

				array[j-1]=array[j];
				array[j]= temp;
			}
		}
		j=0;
	}  */
	
	for(i=0; i<size; i++) {
		printf("%d",array[i]);
	}
	

				array[j-1]=array[j];
				array[j]= temp;
			}
		}
		j=0;
	}  */
	
	for(i=0; i<size; i++) {
		printf("%d",array[i]);
	}
	

				array[j-1]=array[j];
				array[j]= temp;
			}
		}
		j=0;
	}  */
	
	for(i=0; i<size; i++) {
		printf("%d",array[i]);
	}
	
	return (0);
}]=array[j];
				array[j]= temp;
			}
		}
		j=0;
	}  */
	
	for(i=0; i<size; i++) {
		printf("%d",array[i]);
	}
	

				array[j-1]=array[j];
				array[j]= temp;
			}
		}
		j=0;
	}  */
	
	for(i=0; i<size; i++) {
		printf("%d",array[i]);
	}
	

				array[j-1]=array[j];
				array[j]= temp;
			}
		}
		j=0;
	}  */
	
	for(i=0; i<size; i++) {
		printf("%d",array[i]);
	}
	

				array[j-1]=array[j];
				array[j]= temp;
			}
		}
		j=0;
	}  */
	
	for(i=0; i<size; i++) {
		printf("%d",array[i]);
	}
	

				array[j-1]=array[j];
				array[j]= temp;
			}
		}
		j=0;
	}  */
	
	for(i=0; i<size; i++) {
		printf("%d",array[i]);
	}
	

				array[j-1]=array[j];
				array[j]= temp;
			}
		}
		j=0;
	}  */
	
	for(i=0; i<size; i++) {
		printf("%d",array[i]);
	}
	
	return (0);
}