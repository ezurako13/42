#include <unistd.h>
#include <stdio.h>
#include <string.h>

char *ft_strcat(char *dest, char *src);

int main(void)
{	char s1[45]= "haber ah tavukla\t";
	char s2[] = "Tavuklar ah tavuklar";
	char s3[45]= "haber ah tavukla\t";
	char s4[] = "Tavuklar ah tavuklar";
	int n= 31;

	ft_strcat(s1, s2);
	printf("\n\nft_strcat=>\t%s\n", s1);

	strcat(s3, s4);
	printf("\n\nstrcat=>\t%s\n", s1);
	return (0);
}


char *ft_strcat(char *dest, char *src)
{
	int i;
	int o;

	o = -1;
	i = -1;
	while(dest[++i] != '\0');
	i -= 1; 
	while (src[++o] != '\0')
		dest[++i] = src[o];
	dest[i+1] = '\0';
	return (dest);
}
