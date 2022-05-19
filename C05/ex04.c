#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int ft_fibonacci(int index);

int main()
{
	char cahrp[]= "\n\nAah... Ne tatli sozler hazirladim. Kim bilir kac aydir.\n";
	int n= -5;
	printf("\n\n%d. fibonacci= %d\n",n, ft_fibonacci(n));

	return (0);
}

int ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}
